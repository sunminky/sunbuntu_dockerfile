ARG IMAGE_NAME=nvidia/cuda
FROM ${IMAGE_NAME}:10.2-runtime-ubuntu18.04
LABEL maintainer "NVIDIA CORPORATION <cudatools@nvidia.com>"

MAINTAINER Minky

ENV CUDNN_VERSION 8.0.4.30

LABEL com.nvidia.cudnn.version="${CUDNN_VERSION}"

RUN apt-get update && apt-get install -y --no-install-recommends \
    libcudnn8=$CUDNN_VERSION-1+cuda10.2 \
    && apt-mark hold libcudnn8 && \
    rm -rf /var/lib/apt/lists/*
    
# Updating Ubuntu packages
RUN apt-get update && yes|apt-get upgrade
RUN apt-get install -y emacs

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Enable korean encoding
RUN apt-get update && apt-get install -y locales
RUN locale-gen ko_KR.UTF-8
ENV LC_ALL=C.UTF-8

# Adding wget and bzip2
RUN apt-get install -y wget bzip2

# Add sudo
RUN apt-get -y install sudo

# Add user ubuntu with no password, add to sudo group
RUN adduser --disabled-password --gecos '' ubuntu
RUN adduser ubuntu sudo
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
USER ubuntu
WORKDIR /home/ubuntu/
RUN chmod a+rwx /home/ubuntu/
#RUN echo `pwd`

# Anaconda installing
RUN wget https://repo.anaconda.com/archive/Anaconda3-2020.11-Linux-x86_64.sh
RUN bash $(ls -l | grep *.sh | cut -d ' ' -f9) -b
RUN rm Anaconda3-2020.11-Linux-x86_64.sh

# Set path to conda
#ENV PATH /root/anaconda3/bin:$PATH
ENV PATH /home/ubuntu/anaconda3/bin:$PATH

# Updating Anaconda packages
RUN conda update conda
RUN conda update anaconda
RUN conda update --all

# Configuring access to Jupyter
RUN mkdir /home/ubuntu/notebooks
RUN jupyter notebook --generate-config --allow-root
RUN echo "c.NotebookApp.password = u'sha1:6a3f528eec40:6e896b6e4828f525a6e20e5411cd1c8075d68619'" >> /home/ubuntu/.jupyter/jupyter_notebook_config.py

# Jupyter listens port: 8888
EXPOSE 8888

#ADD HTTPS Setting
#ADD ssl.sh /home/ssl.sh
#RUN sudo chmod a+x /home/ssl.sh
#RUN sudo /home/ssl.sh

# Run Jupytewr notebook as Docker main process
CMD ["jupyter", "notebook", "--allow-root", "--notebook-dir=/home/ubuntu/notebooks", "--ip='*'", "--port=8888", "--no-browser"]

#Run Command
#docker run --name cuda10_1_cudnn_8_2 --runtime=nvidia --restart always --env="DISPLAY" --network web_bridge --ip 172.19.0.5 -itd -v "/media/sunbuntu/1tb/private/Programing:/home/ubuntu/notebooks" -v "/home/sunbuntu/certification:/home/certification:ro" cuda10_2_cudnn_8:0.0.1

##References
#http://www.science.smith.edu/dftwiki/index.php/Tutorial:_Docker_Anaconda_Python_--_4
