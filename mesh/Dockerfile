FROM ubuntu:16.04

MAINTAINER Minky

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Enable korean encoding
RUN apt-get update && apt-get install -y locales
RUN locale-gen ko_KR.UTF-8
ENV LC_ALL=C.UTF-8 

#prepare requirments
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y kmod
RUN apt-get install -y batctl bridge-utils
RUN apt-get install -y wireless-tools

#Run Command
#docker run -it --restart always --name mesh --net host --privileged --cap-add=all -v /lib/modules:/lib/modules:ro mesh:0.0.1
