# İnternet ile İlgili Notlarım
##HTTP
> HTTP yani Hypertext Transfer Protocol türkçesiyle Hiper Metin İletim Yöntemi adından anlaşılabileceği üzere bir protokol yani yöntemdir. Bu protokol ile yazı aktaran sistemlere Ağ sunucusu, bu sistemi kullanarak yayın yapanlara web sitesi ve iletileri alanlara client diyebiliriz. HTTP Yöntemi genel itibariyle HTTP/1 ve HTTP/2 olarak ayrılıyor. HTTP ile alakadar güncellemeleri İnternet Hükümeti adı altında IETF (Internet Engineering Task Force) yani İnternet Mühendisliği Görev Gücü standartlaştırmakta.
 
Ağ sunucularına örnek olarak:

* Apache HTTP Server
* Ngix
* LiteSpeed
* Microsoft IIS
* OpenResty

Şahsen ben "Apache HTTP Server" dışında bir ağ sunucusu kullanmadım ve HTTP deyince de aklıma Apache dışında bir şey gelmiyor.

### Request ve Response
> İnternet üzerinde bir ağ sunucusuna gönderilen bağlantı isteğine HTTP Request adı verilir. Gelen yanıta ise HTTP Response adı verilir.

### HTTP'de Header ve Body
#### Header
> Header HTTP Response/Request paketinin baş kısmında bulunan, paketin içeriğinden ziyade paketle ilgili bilgileri içeren kısıma verilen isimdir.
#### Body
> Body HTTP Response/Request paketinin gövdesini yani aktarılacak metinin/dosyanın kendisini içerir.

### MIME
> İnternet üzerinde özellikle HTTP ve SMTP protokollerinde aktarılan dosyaların formatlarını standartlaştırmak amacıyla kullanılır. Bir siteye bağlanmaya çalıştığınızda response yani cevap paketinin içerisinde content-type adı altında format tipi gönderilir. Bu format tipi mime standartlarına uygun olarak tarayıcınız tarafından işlenir ve size sunulur. Eğer bu durum söz konusu olmasa bir görsel aktarıldığında taraycınız size karmakarışık görsel kodlarını gösterecektir.

### .HTML
> HTML yani Hypertext Markup Language türkçesiyle "Hiper Metin İşaretleme Dili" web sayfalarını oluşturmak için kullanılan standart dildir. Sanılanın aksine HTML yalnızca web üzerinde kullanılmaz. Programlarda, oyunlarda sayfa görüntülemek ve oluşturmak için kullanılabilir. Bildiğim kadarıyla React Native mobil uygulama oluşturmak için HTML dilini kullanıyor.

### URL
> Uniform Resource Locator yani Kaynak Konumlayıcı ismi verilen bu sistem internet üzerinde ki bir kaynağa ulaşmak için kullanacağınız belirli bir standarta göre düzenlenen formattır. URL'i çoğu kişinin çok iyi bildiğini düşündüğümden detaylıca örnek vermeyi gerek bulmuyorum. Temel olarak URL'nin kaynak konumlayıcı olduğunu bilmeniz yeterlidir.

### .HTACCESS
> Çoğu ağ sunucusunun kullandığı ağ sunucusunun kurallarını belirlemeyi sağlayan dilin dosya formatıdır. HTAccess dili sayesinde istediğiniz gibi URL yönlendirmesi yapabilirsiniz. HTAccess dilini örneksiz anlatmam çok zor olacaktır bu yüzden meraklı olanlar internetten daha detaylı araştırabilir.

## TCP / UDP
> İnternette haberleşme için tüm kaynaklarda güvenli ve güvensiz olarak sınıflandırılan protokollerdir. İnternet için ara farkla en çok bilinen ve en çok kullanılan protokollerdir. Temel olarak TCP'nin güvenli ve UDP'nin güvensiz ama hızlı olduğunu bilmeniz yeterlidir. Geri kalan bilgiler protokollerin çalışırken kullandığı prensipleri açıklamak için verilebilir. Bunlara ben de hakim değilim.

## İnternet Mühendisliği Görev Gücü
Kaynak: https://www.ietf.org
 
> Resmi olmayan bir standart kuruluşudur. İnternet yönetimini sağlayan altı kuruluştan (IGF, NRO, IANA, ICANN, IETF, ISOC) biridir. Internet Protocol Suite (TCP/IP) ismi altındaki internet protokollerin standartlaştırılmasını sağlar.

## İnternet İletişim Kuralları Dizisi (Internet Protocol Suite yani TCP/IP)
Kaynak: https://en.wikipedia.org/wiki/Internet_protocol_suite
 
> İnternet üzerinde kullanılan iletişim protokollerinin bütün olarak ismidir.
 
* HTTP
* DNS
* SMTP
* FTP
* SSL
* SSH
* Telnet

ve benzeri internet protokollerini örnek olarak gösterebiliriz.

## Yorumlar İçin Talep / Request For Comments (RFC)
Kaynak: https://www.rfc-editor.org

> TCP/IP'nin tanımlanması için kullanılan standartlardır. Standartlar birbirlerinden numaraları aracılığıyla ayrılır.