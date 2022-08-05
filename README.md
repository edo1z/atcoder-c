## C/C++でatcoder

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
- `c++(clang10.0.0)`は、`4004`

### templateファイルのデフォルト設定の切り替え

```shell
acc config default-template cpp
```

- templateファイルは下記に置いておく(macの場合)
  - `/Users/${User}/Library/Preferences/atcoder-cli-nodejs`
  - atcoder-cli-nodejsの中身はこんな感じにする

```shell
tree -L 3
.
├── c
│   ├── Makefile
│   ├── main.c
│   └── template.json
├── config.json
├── cpp
│   ├── Makefile
│   ├── main.cpp
│   └── template.json
└── session.json
```

#### cpp/main.cpp (template)

- main.cpp

```cpp
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  cout << ans << endl;
}
```

- Makefile

```Makefile
b:
	clang++ main.cpp -std=gnu++14
e:
	clang++ main.cpp -std=gnu++14 && ./a.out
e-%:
	clang++ ${@:e-%=%}.cpp -std=gnu++14 && ./a.out
t:
	oj t
s:
	acc s main.cpp -- -l 4004
```

#### cpp/template.json

```json
{
    "task":{
    "program": ["main.cpp", "Makefile"],
    "submit": "main.cpp", 
    "testdir": "test"   
    }
}
```


## Dockerfile

- Atcoderがgcc ver9.2.1なので、一応Dockerfileでgcc version9.2の環境を作ってみた。
- gcc公式のdocker hubで9.2はあったけど、9.2.1はなかった。

```shell
docker build . -t atcoder
docker run -v ${PWD}:/app --name atcoder -itd atcoder /bin/sh
docker exec -it atcoder bash
```
