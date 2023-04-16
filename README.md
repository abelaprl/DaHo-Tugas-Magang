# DaHo-Tugas-Magang

> Deadline: 23 April 2023

### Petunjuk Pengerjaan

#### Setup
1. Buatlah catkin workspace
2. Silahkan fork github repositori ini pada catkin workspace kalian (Repositori ini merupakan package ROS)

#### Soal
##### Buat 1 package yang terdiri dari: (telah disediakan)
1. 1 Service file: 2 parameter (tipe data: int64) request -> 1 parameter response (tipe data: int64)
2. 1 Massage file: 1 variabel bertipe data int64
3 buah node:
1. server: Melakukan proses penambahan dua buah int
2. subscriber: Subscribe ke topic yang dipublish oleh publisher setelah client melakukan request ke server
3. publisher_client: Panggil service menggunakan client dari masukan argument, setelah mendapatkan respons, hasilnya dipublish ke topic

##### Run:
###### Cara 1 - Menggunakan launch file (Optional)
1. Buat launch file yang bakal jalanin server sama subscriber (jangan lupa subscriber harus ngeprint)
2. rosrun <nama_package> <node_publisher_cliet> <arg1> <arg2> 
###### Cara 2 - Menggunakan rosrun
1. Nyalakan ROS master dengan menggunakan roscore
2. Jalankan node server
3. Jalankan node subscriber
4. Jalankan node publisher_client

##### Alur (untuk memperjelas):
1. menerima masukkan dari arguments
2. client request service ke server
3. server menggembalikan response
4. hasil dari response di publish ke topic
5. subscriber output(ngeprint) dari topic

#### Langkah Pengerjaan
1. Silahkan mengerjakan sesuai dengan yang diminta pada soal dan disesuaikan dengan template yang telah disediakan

### Pengumpulan
1. Lakukan pull request
