FROM ubuntu:latest

RUN apt update; apt install -y build-essential autoconf automake ca-certificates openssl vim wget && \
    wget -O ta-lib-0.4.0-src.tar.gz https://sourceforge.net/projects/ta-lib/files/ta-lib/0.4.0/ta-lib-0.4.0-src.tar.gz/download && \
    tar xvzf ta-lib-0.4.0-src.tar.gz && \
    cd ta-lib/ && \
    ./configure && \
    make && \
    make install

RUN mkdir -p /ta-lib-shell

WORKDIR /ta-lib-shell

COPY . /ta-lib-shell

CMD ["/bin/sh"]