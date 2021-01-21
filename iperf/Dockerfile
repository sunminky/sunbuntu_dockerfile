FROM ubuntu:20.04

RUN apt-get update \
 && apt-get install -y iperf

ENTRYPOINT ["iperf", "-s -V -w 2M"]

#Run Command
#docker run -itd -p 5001:5001 --name=iperf --restart=always iperf:0.0.1
