# PHP Programlama Dili İçin Standard Notlarım
> PHP Programlama dili için standartlar https://www.php-fig.org/psr/ sitesinde PCR (PHP Standards Recommendations yani PHP Standart Önerileri) adı altında paylaşılıyor.

# Yazı Amacı
Basit ve türkçe anlatımla PHP'nin standardlarının nereden paylaşıldığını ve konuyla ilgili bilinmesi şart standardları öğretmeyi amaçlamaktayım.

> Yirmi bir farklı standard maddesi içersinden bir kaç maddeyi kapsayan bir yazıdır. İlgili maddelerin içerisinde öneri ve öneri olmayıp kullanılması şiddetle tavsiye edilen maddeler mevcut. Konuyla ilgili talimatların zorunluluk statüleri IETF (Internet Engineering Task Force / İnternet Mühendisliği Görev Gücü) https://www.ietf.org/rfc/rfc2119.txt tarafından belirlenmiştir. Ben yalnızca tavsiye şeklinde aktaracağım. Meraklısı için bağlantıları bıraktım.

# Standardlar

 * Sınıflar, fonksiyonlar, enumlar ve benzeri tanımlamalar ile html çıktısı oluşturma, php.ini ayarlarını değiştirme gibi yan işlevler farklı dosyada işlenmelidir.

Kodlarınız aşağıda bulunan örnekteki gibi düzenli olmalıdır:

index.php:
```php
<?php
if(!isset($_GET["username"])) die("Lütfen kullanıcı adı gönderin.");
$user = get_user_data($_GET["username"]);
?>

Ortalamanız: <?=$user["ortalama"]?>
```
utils.php:
```php
function get_user_data(){
    // Kullanıcının verilerini alan algoritma kodları.
}
```

 * Sınıf isimleri <b>StudlyCaps (AlternatingCaps veya StickyCaps olarak da bilinir.)</b> standardıyla verilir. Konuyla ilgili bilgisi olmayanlar için olay büyük ve küçük harflerle ilgili düzeni sağlamak. 

Örnek: ```class AutoLoad{}```

 * Sınıf sabitlerinin (constant / const) adı <b>hepsi büyük harf</b> olacak ve kelimeler alttan çizgi ile ayrılacak şekilde tanımlanmalıdır. 

Örnek: ```const PIKOD;```

 * Fonksiyon/Method isimleri <b>"camelCase"</b> kuralına uygun belirlenmelidir. 

Örnek: ```function callPikod(): void {}```

* Anladığım kadarıyla kılavuz "Properties" bölümünde değişkenlerden bahsediyor. Sanırım değişkenler için öneri vermekten çekinmişler. Makul seviyede olmak suretiyle $under_score, $StudlyCaps veya $camelCase kullanabileceğinizi söylediğini sanıyorum.


* Tüm PHP dosyaları bir adet boş satır ile bitmelidir.

Örnek:
```php
<?php

function deneme(){
    // ...
}

```

* Kodlar tab ölçüsü olarak dört boşluk kullanmalıdır.


* Kod satırlarının 80 karakter ve daha az olması önerilmektedir.


* Namespace tanımlamasından ve Use satırlarından sonra birer satır boş bırakılmalıdır.

Örnek:
```php
namespace Pikod;

use Pikod\Framework;
use Pikod\HTTP;
use Pikod\Router;

// ...
```

* Sınıflar için parantez açarken boşluklar şöyle olmalıdır:

```php
class Pikod
{

}
```

* Methodlar için de aynı şey geçerlidir.


* Erişim belirleyeciler (private, public) her methodda tanımlanmalıdır. `abstract` ve `final` erişim belirleyiciden önce gelmelidir. `static` erişim belirleyiciden sonra gelmelidir.


* Koşul yapılarıyla ilgili olarak: If, else, else if gibi anahtar kelimelerden önce ve sonra bir boşluk koyulmalıdır.


Örnek:
```php
<?php

if ($expr1) {
    // if body
} elseif ($expr2) {
    // elseif body
} else {
    // else body;
}
```