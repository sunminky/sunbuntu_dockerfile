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

#Install certbot
RUN apt-get -y install certbot

#for cron
RUN apt-get update && apt-get -y install cron && rm -rf /var/lib/apt/lists/*
ADD certbot-cron /etc/cron.d/certbot-cron
RUN crontab /etc/cron.d/certbot-cron

#Run Auto_renewal
CMD ["cron", "-f"]

#Run Command
#docker run -itd --restart always --net host --name ssl -v /home/sunbuntu/certification:/etc/letsencrypt ssl:0.0.1
