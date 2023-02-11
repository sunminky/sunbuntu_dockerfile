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

#install software
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y igmpproxy

#copy configure file
RUN mkdir -p /home/settings
ADD igmp.conf /home/settings

#start routing
ENTRYPOINT igmpproxy -vv -n /home/settings/igmp.conf

#Run Command
#docker run -itd --restart always --net host --name router router:0.0.1
