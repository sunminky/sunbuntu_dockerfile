FROM ubuntu:20.04

MAINTAINER Minky

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Enable korean encoding
RUN apt-get update && apt-get install -y locales
RUN locale-gen ko_KR.UTF-8
ENV LC_ALL=C.UTF-8 

#copy source file
RUN mkdir -p /home/usb
ADD usb-redirector-linux-x86_64 /home/usb
ADD check.sh /home/usb
RUN chmod a+x /home/usb/check.sh

#prepare requirments
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y build-essential
RUN apt-get install -y kmod
RUN apt-get install -y linux-headers-$(uname -r)

#build
WORKDIR /home/usb
RUN ./installer.sh install-server

#Drop external IP
RUN apt-get -y install iptables
ADD iptables.sh /home/usb/iptables.sh
RUN chmod a+x /home/usb/iptables.sh

#Sharing usb
ENTRYPOINT /home/usb/iptables.sh && /home/usb/check.sh

#Run Command
#docker run -it --restart always --name usb --privileged --cap-add=all -v /lib/modules:/lib/modules:ro -p 32032:32032 usb:0.0.1

##lsmod##
#tusbd                  61440  2
#usblp                  24576  0
