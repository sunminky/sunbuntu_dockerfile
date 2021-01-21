FROM ubuntu:16.04

MAINTAINER Minky

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

#Install samba
RUN apt-get update
RUN apt-get -y install samba
RUN mkdir -p /home/samba/1tb
ADD smb.conf /etc/samba/smb.conf

#ADD Authorized member
RUN useradd -m smbuser -p 1111
RUN (echo 1111; echo 1111) | smbpasswd -a -s smbuser

#Run Samba
CMD service samba restart && bash

#Run Command
#docker run -itd -m 128M --restart always --name samba --net host -itd -v /media/sunbuntu/1tb/1tb:/home/samba/1tb samba:0.0.1
