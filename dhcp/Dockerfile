FROM ubuntu:20.04

RUN apt-get update \
 && apt-get install -y isc-dhcp-server \
 && rm -rf /var/lib/apt/lists/*

RUN touch /var/lib/dhcp/dhcpd.leases
RUN mkdir -p /etc/dhcp
ADD dhcpd.conf /etc/dhcp/dhcpd.conf

#ENTRYPOINT ["/usr/sbin/dhcpd", "-d", "--no-pid"]

ENTRYPOINT ["/usr/sbin/dhcpd", "-d"]

#Run Command
#docker run -itd --net=host --name=dhcp --restart=always dhcp:0.0.1 br0
