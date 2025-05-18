# 📦 CPP Module 00

Bu modül, Ecole 42'nin C++ müfredatının ilk modülüdür ve C++ dilinin temellerini öğretmeyi amaçlar. C dilinden gelen bir geliştirici için C++'ın OOP (Nesne Yönelimli Programlama) özelliklerine yumuşak bir geçiş sunar.

## 🎯 Amaç

- C++ dilinin temellerini kavratmak
- Sınıf yapıları, erişim belirleyiciler ve temel C++ sözdizimini öğrenmek
- C dilinden farklı olarak C++'ın sunduğu OOP prensiplerine giriş yapmak

## 🧠 Öğrenilen Konular

- `class` ve `instance` yapısı
- Yapıcı (constructor) ve yıkıcı (destructor) fonksiyonlar
- Public ve private erişim belirleyiciler
- `this` pointer
- Fonksiyon üyeleri (member functions)
- Nesne yönetimi ve ömürleri

## 📁 Dosya Yapısı

```bash
CPP_Module00/
├── Makefile
├── ex00/
│   └── megaphone.cpp
├── ex01/
│   └── phonebook.cpp
```

### 🔹 `ex00 - Megaphone`

Basit bir C++ programı: Argüman olarak verilen cümleyi büyük harflerle yazdırır. Bu örnek, C++ program yapısını ve temel `iostream` kullanımını tanıtmak için yazılmıştır.

```cpp
std::cout << toupper(argv[i][j]);
```

---

### 🔹 `ex01 - PhoneBook`

Konsol tabanlı basit bir telefon rehberi uygulamasıdır. Sabit uzunlukta 8 kişilik kayıt tutar. Kullanıcıdan bilgi alır, formatlı bir şekilde listeler ve detaylı görüntüleme sunar.

- `ADD`: Yeni kullanıcı ekler
- `SEARCH`: Kayıtları listeler ve index ile detay görüntüleme sağlar
- `EXIT`: Programdan çıkar

Amaç: Sınıf yapısını, fonksiyonları ve kullanıcı etkileşimini uygulamalı öğretmek.

---

## ⚙️ Derleme ve Çalıştırma

```bash
cd ex00 && make
./megaphone "Hello World!"

cd ../ex01 && make
./phonebook

---

## 👨‍💻 Geliştirici

**Mustafa Büyükatçeken** 
📧 mustafa.buyukatceken@hotmail.com  
🔗 [GitHub](https://github.com/Phogu)  
🔗 [LinkedIn](https://www.linkedin.com/in/mustafabuyukatceken/)

---
