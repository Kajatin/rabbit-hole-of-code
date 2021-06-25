FROM ubuntu:latest

RUN apt-get update && apt-get install --no-install-recommends -y build-essential \
  && rm -rf /var/lib/apt/lists/*

COPY ack.cc .
RUN  g++ ack.cc -o ack
# CMD [ "./ack", "1", "2" ]
ENTRYPOINT [ "./ack" ]