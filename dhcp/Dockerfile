FROM ubuntu:20.04

# Time setting for local time(Seoul) 
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

#Replace apt repository
RUN sed -i 's/kr.archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

RUN apt-get update \
&& apt install -y isc-dhcp-server \
&& rm -rf /var/lib/apt/lists/*

RUN touch /var/lib/dhcp/dhcpd.leases
RUN mkdir -p /etc/dhcp
ADD dhcpd.conf /etc/dhcp/dhcpd.conf

#ENTRYPOINT ["/usr/sbin/dhcpd", "-d", "--no-pid"]

ENTRYPOINT ["/usr/sbin/dhcpd", "-d"]

#Run Command
#docker run -itd --net=host --name=dhcp --restart=always dhcp:0.0.1 br0
