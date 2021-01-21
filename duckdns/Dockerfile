FROM ubuntu:20.04
MAINTAINER Minky

RUN apt-get update && apt-get -y install cron
RUN apt-get update && apt-get -y install curl

# Copy hello-cron file to the cron.d directory
COPY duckdns-cron /etc/cron.d/duckdns-cron
COPY sunbuntu.sh /home/settings/sunbuntu.sh

# Give execution rights on the cron job
RUN chmod 0644 /etc/cron.d/duckdns-cron

# Apply cron job
RUN crontab /etc/cron.d/duckdns-cron

# Create the log file to be able to run tail
RUN touch /var/log/cron.log

# Cron 실행
CMD [ "cron","-f" ]

#Run Command
#docker run -itd --restart always --name duckdns duckdns:0.0.1
