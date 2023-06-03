FROM gcc:latest

COPY . ./

WORKDIR /tests

RUN bash test_pipeline.sh