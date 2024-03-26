FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
  build-essential \
  checkinstall \
  cmake \
  git \
  g++ \
  openssl \
  libace-dev \
  libmysqlclient-dev \
  libssl-dev \
  libtbb-dev \
  zlib1g-dev \
  libreadline-dev \
  && rm -rf /var/lib/apt/lists/*

ENV ACE_ROOT=/usr/include/ace
ENV TBB_ROOT_DIR=/usr/include/tbb
ENV TZ="Europe/Paris"

WORKDIR /vmangos/
RUN git clone -b master https://github.com/Benjaminmnoer/vmangoscore.git src

WORKDIR /vmangos/src/build/
RUN cmake .. -DDEBUG=0 -DSUPPORTED_CLIENT_BUILD=5875 -DUSE_EXTRACTORS=0 -DCMAKE_INSTALL_PREFIX=/vmangos/server
RUN make -j $(nproc) install

WORKDIR /vmangos/server/bin
COPY start-server.sh .
RUN chmod +x start-server.sh
ENTRYPOINT [ "./start-server.sh" ]
