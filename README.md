# Gömülü Sistem Sensör Verilerinin Habitat Etkisi İncelenmesi ve Mobil Uygulamada Görüntülenmesi

## Proje Ekibi
- **Şeyma BEYAZTAŞ**
- **İbrahim AYDIN**
- **Gizem NARİN**

## Projenin Kapsamı ve Önemi
Bu projenin odak noktası, gömülü sistem sensör verilerinin habitat etkisini incelemek ve mobil uygulama aracılığıyla görselleştirmektir. Arduino tabanlı sıcaklık, nem ve hava kalitesi sensörleri kullanılarak elde edilen veriler, Firebase veritabanına aktarılacak ve mobil uygulama üzerinden kullanıcılara sunulacaktır. Bu proje, çevresel etkilerin hayvan habitatları üzerindeki potansiyel etkilerini anlamak ve bu etkileri izlemek için yenilikçi bir yaklaşım sunmaktadır.

### Projenin Yenilikçi Yönü
Bu proje, habitat etkisi izleme alanında yenilikçi bir yaklaşım sunmaktadır. Geleneksel yöntemlerle, habitat değişikliklerinin etkilerini anlamak ve izlemek zor olabilir. Ancak, bu projede sensör verilerinin kullanılmasıyla, habitat değişikliklerinin daha hızlı ve etkili bir şekilde izlenmesi mümkün olacaktır. Ayrıca, mobil uygulama aracılığıyla kullanıcıların gerçek zamanlı verilere erişebilmesi ve habitat değişikliklerinin etkilerini görsel olarak görebilmesi sağlanacaktır.

### Projenin Potansiyel Çıktıları
- **Ticari**: Çevresel izleme ve habitat etkisi analizi alanında kullanılabilecek bir ürün veya hizmet geliştirilebilir. Çevre koruma şirketleri, doğal yaşamı koruma kuruluşları ve araştırma enstitüleri için potansiyel ticari fırsatlar sunabilir.
- **Sosyal**: Çevre bilinci ve doğa koruma konularında toplumun farkındalığını artırabilir. Kullanıcılar, mobil uygulama aracılığıyla habitat değişikliklerinin etkilerini görebilecek ve çevre dostu davranışları teşvik edebileceklerdir.
- **Araştırma**: Çevresel değişikliklerin hayvan habitatları üzerindeki etkilerini daha iyi anlamak için kullanılabilecek veri setleri sağlayabilir. Çeşitli bilimsel araştırmalara ve doğa koruma çabalarına katkıda bulunabilir.

## Amaç ve Hedefler
Bu proje, habitat değişikliklerinin hayvan yaşamı üzerindeki etkilerini izlemek ve anlamak amacıyla yapılmaktadır. Projenin ana hedefi, gömülü sistem sensörler aracılığıyla elde edilen verileri kullanarak habitat değişikliklerini belirlemek ve bu değişikliklerin hayvan yaşamı üzerindeki potansiyel etkilerini analiz etmektir. Proje ayrıca, mobil uygulama aracılığıyla bu verileri kullanıcılarla paylaşarak, çevre bilincini artırmayı ve çevre dostu davranışları teşvik etmeyi hedeflemektedir.

### Paydaşlar
- **Çevre Koruma Kuruluşları**: Habitat değişikliklerini izlemek ve hayvan yaşamını korumak amacıyla bu tür veri toplama ve analiz sistemlerine ihtiyaçları bulunmaktadır.
- **Araştırma Enstitüleri**: Çevresel değişikliklerin hayvan habitatları üzerindeki etkilerini araştırmak isteyen akademik ve bilimsel kuruluşlar için değerli veri sağlayabilir.
- **Doğa Severler ve Hobici Araştırmacılar**: Projenin mobil uygulama aracılığıyla sağladığı verileri kullanarak çevre bilincini artırabilir ve doğal yaşamı koruma çabalarına katkıda bulunabilir.
- **Mobil Uygulama Kullanıcıları**: Mobil uygulama aracılığıyla sunulan verilere erişen genel kullanıcılar, çevresel değişikliklerin etkilerini görsel olarak görebilecek ve çevre dostu davranışlar sergileyebileceklerdir.

## Gerekli Malzemeler
- ESP8266 Mikrodenetleyici
- DHT11 Sıcaklık ve Nem Sensörü
- MQ135 Gaz Sensörü
- Bağlantı kabloları

## Kurulum
1. ESP8266 mikrodenetleyicinizi bilgisayarınıza bağlayın.
2. [Arduino IDE](https://www.arduino.cc/en/Main/Software)'yi indirin ve kurun.
3. ESP8266 kart desteğini Arduino IDE'ye ekleyin.
   - Arduino IDE'yi açın ve `Dosya > Tercihler` menüsüne gidin.
   - "Ek Kart Yöneticisi URL'leri" alanına `http://arduino.esp8266.com/stable/package_esp8266com_index.json` URL'sini ekleyin.
   - `Araçlar > Kart > Kart Yöneticisi` menüsüne gidin ve "esp8266"yı aratıp kurun.
4. Gerekli kütüphaneleri yükleyin:
   - `DHT sensor library`
   - `ESP8266WiFi`
   - `MQ135`
5. Bu depodan `main.ino` dosyasını indirin ve Arduino IDE'de açın.
6. `main.ino` dosyasındaki WiFi SSID ve şifrenizi güncelleyin:
   ```cpp
   const char *ssid = "Seyma";
   const char *pass = "urfa2763";

![1](https://github.com/YazilimMuh/Gomulu/assets/142061255/bfe8b42a-622f-485c-be1c-d53742d3f2d3)
![2](https://github.com/YazilimMuh/Gomulu/assets/142061255/fc247f24-c430-437f-b69c-e5b4af1c1fe0)
![3](https://github.com/YazilimMuh/Gomulu/assets/142061255/dc5c9429-11ff-437b-96ff-cee30b7940fa)
![4](https://github.com/YazilimMuh/Gomulu/assets/142061255/d792b8e5-9c39-430d-9c24-665f92dc87e4)


