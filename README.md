# atcoder

# About Python

### input(arg)

実行したときにインプットできる。
1 行全てを取得できる。
arg に値が入っている際はインプットする時の prompt 左側に表示される。

### split(sep=None, maxsplit=- 1)

sep を区切りとして、同じ型の部分シーケンスに分割します。 maxsplit が与えられ、かつ負の数でない場合、シーケンスの 左端 から最大 maxsplit 回だけ分割を行います (したがって結果のリストの要素数は最大で maxsplit+1 になります)。 maxsplit が指定されていないか -1 のとき、分割の回数に制限はありません (可能なだけ分割されます)。

input()で受け取った文字列をスペース区切りで取得
入力が 2 4 の時
a, b = input().split()
をすることで a = 2, b = 4 が代入される。（これは文字列）

### map(function, iterable, \*iterables)

function を iterable の全ての要素に適用して結果を生成 (yield) するイテレータを返します。追加の iterables 引数が渡された場合、 function は渡されたイテラブルと同じ数の引数を取らなければならず、関数は全てのイテラブルから並行して得られた要素の組に対して適用されます。複数のイテラブルが渡された場合、そのうちで最も短いイテラブルが使い尽くされた段階で止まります。関数の入力が引数タプルとして単一のイテラブルの形で整理されている場合は、 itertools.starmap() を参照してください。

input().split()で取得した複数の要素を一気に int にキャストする
a, b = map(int, input().split())

### math.ceil(x)
Return the ceiling of x, the smallest integer greater than or equal to x. If x is not a float, delegates to x.__ceil__, which should return an Integral value.

切り上げをおこなってくれる。ガウス記号みたいなもの。
x 円の買い物で必要な千円札を求めたいとき
math.ceil(x / 1000) * 1000
のような形で求められる。


### all(iterable)
iterable の全ての要素が真ならば (もしくは iterable が空ならば) True を返します。以下のコードと等価です:

def all(iterable):
    for element in iterable:
        if not element:
            return False
    return True

all(a % 2 == 0 for a in A)
配列Aのそれぞれの要素が全て2で割れ切れる場合はtrueを返す

# About JavaScript

### "use strict";

厳格モードにするより高速化される

### var, let, const

var は巻き上げが起こる、var a; var a;と再定義が可能
環境によっては var の方がちょっと早い？

### input.split(/ |\n/)

正規表現で split してる
正規表現のおかげで複数のセパレータを指示できる

## 正規表現を使う際に()を含めると、セパレータも配列に格納される

separator がキャプチャの括弧 (``) を含む正規表現である場合、一致した結果が配列に含まれます。

const myString = 'Hello 1 word. Sentence number 2.'
const splits = myString.split(/(\d)/)

console.log(splits)
このスクリプトは、以下を表示します。
[ "Hello ", "1", " word. Sentence number ", "2", "." ]

---

string を 1 つの配列に変えたいとき → string.split()
string を一文字づつ分割して配列に入れたいとき → string.split('')

### string 内に出てきた文字のカウント.match()

var s = "strings";
の s の回数を数えるとき
var count = (s.match(/s/g)).length;

g フラグをつけることで、正規表現に一致したすべての結果配列が返ってくるから長さをとっている。
g フラグが無い場合、一番最初にマッチしたものに対してのキャプチャが返ってくる

### number 　 n で割り切れる回数 .toString()

var num = 12;
bs = num.toString(2); // 引数に基数を入れる
// '1100'
この時の後ろの 0 の個数が割り切れる回数
bs.match(/0\*$/)[0].length
で後ろの 0 の個数を求められる
