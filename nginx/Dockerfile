FROM nginx:latest

MAINTAINER Minky

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Enable korean encoding
RUN apt-get update && apt-get install -y locales
RUN locale-gen ko_KR.UTF-8
ENV LC_ALL=C.UTF-8

#Install Editor
RUN apt-get install -y vim

#listens port: 80
EXPOSE 80

#ADD nginx configuration file
ADD default.conf /etc/nginx/conf.d/default.conf

#Run Command
#docker run -itd --restart always --name nginx_s --network web_bridge --ip 172.19.0.2 -p 80:80 -p 443:443 -v "/home/sunbuntu/certification:/home/certification:ro" nginx_s:latest
