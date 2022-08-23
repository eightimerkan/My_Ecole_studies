# Get_next_line


TURKISH


Get_next_line'nın amacı dosyayı okuduğumuz zaman ki ilk satırı çekmek ve satırdan fazlasını çektiğimiz zaman bu veriyi static bir variable de korumak.Aynı zamanda dosyadan sürekli veri okumak yerine static variable de veriyi saklamak ve optimizasyon sağlamak.

Projeyi nasıl yaptım ? 
3 kısıma ayırdım.

1. Kısım: Veriyi dosyadan oku. Okuduğum tüm veriyi static variable de sakla. (store function)

2. Kısım: Depomdan ilk satırı çek.(pull_new_line function)

3. Kısım: Depomdan ilk satırı çek, kalan kısmı al ve depoyu güncelle.(seperate function)


ENGLISH

The purpose of get_next_line is to pull the first line when we read the file and to protect this data in a static variable when we pull more than one line. At the same time, instead of constantly reading data from the file, it is to store the data in a static variable and provide optimization.

How did I do the project?
I divided it into 3 parts.

Part 1: Read data from file. Store all the data I read in a static variable. (store function)

Part 2: Pull the first line from my repository.(pull_new_line function)

Part 3: Pull the first row from my repository, get the rest and update the repository.(seperate function)
