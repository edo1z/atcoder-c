FROM gcc:9.2
WORKDIR /app
RUN apt-get update
RUN apt-get install -y python python3-pip nodejs npm
RUN pip3 install online-judge-tools
RUN npm i -g atcoder-cli
CMD ["gcc", "--version"]

