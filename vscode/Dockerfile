FROM codercom/code-server

MAINTAINER Minky

# Time setting for local time(Seoul) 
RUN sudo ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sudo sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Enable korean encoding
RUN sudo apt-get update && sudo apt-get install -y locales
RUN sudo locale-gen ko_KR.UTF-8
ENV sudo LC_ALL=C.UTF-8

#ADD C/C++ Extension Pack
WORKDIR /home
RUN curl -LO https://github.com/microsoft/vscode-cpptools/releases/download/1.1.3/cpptools-linux.vsix

#Install compiler
RUN sudo apt-get update && sudo apt-get -y install build-essential

#Run Command
#docker run -itd --restart always --name code-server --network web_bridge --ip 172.19.0.6 -v /media/sunbuntu/1tb/private/C_Programing:/home/coder -v /usr/src/linux-headers-$(uname -r)/include:/usr/src/linux-headers-$(uname -r)/include:ro -e PASSWORD=$(echo 'password') code-server_s:latest

#docker run -itd --restart always --name code-server --network web_bridge --ip 172.19.0.6 -v "/media/sunbuntu/1tb/private/C_Programing:/home/coder" -u "$(id -u):$(id -g)" -e "DOCKER_USER=$USER" -e PASSWORD=$(echo 'password') code-server_s:latest
