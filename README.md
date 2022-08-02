## C言語でatcoder

- [ atcoder_cli ](https://github.com/Tatamo/atcoder-cli)で問題ダウンロードしたり、テンプレートファイルを自動生成したりする。
- [ online-judge-tools ](https://github.com/online-judge-tools/oj)で自動テストしたり、提出したりする。

```shell
acc new abc262
cd abc262/a
clang main.c
oj t
acc s main.c -- -l 4002
acc add
```

- `acc s`の`-l 4002`は`oj`のオプションで、言語（コンパイラ）のコード。
  - `4002`は`C(clang10.0.0)`。


## Dockerfile

- Atcoderがgcc ver9.2.1なので、一応Dockerfileでgcc version9.2の環境を作ってみた。
- gcc公式のdocker hubで9.2はあったけど、9.2.1はなかった。

```shell
docker build . -t atcoder
docker run -v ${PWD}:/app --name atcoder -itd atcoder /bin/sh
docker exec -it atcoder bash
```
