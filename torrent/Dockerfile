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

#Install qbittorrent-nox
RUN apt-get update && apt-get -y install python-software-properties && apt-get install -y software-properties-common
RUN add-apt-repository -y ppa:qbittorrent-team/qbittorrent-stable
RUN apt-get -y install qbittorrent-nox
RUN adduser --system --group qbittorrent-nox
RUN mkdir -p /home/qbitorrent-nox/download

#Run qbittorrent
ENTRYPOINT qbittorrent-nox

#Run Command
#docker run -itd -m 512M --restart always --name torrent --network web_bridge --ip 172.19.0.4 -v /media/sunbuntu/1tb/1tb/임시파일:/root/Downloads torrent:0.0.2
