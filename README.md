# Beacon

## Tổng quan

Beacons sử dụng công nghệ BLE-[Bluetooth Low Energy](https://en.wikipedia.org/wiki/Bluetooth_Low_Energy) ( còn được gọi là Bluetooth Smart). BLE sử dụng giao thức khác Classic Bluetooth, và không tương thích ngược. BLE sử dụng cùng băng tần 2.4GHz.

Ưu thế lớn nhất của BLE là tiết kiệm năng lượng, điều này cho phép beacons truyền thông tin liên tục lên đến 2-3 năm chỉ với một viên pin nhỏ. Khoảng cách truyền BLE cũng lên đến 100m như Classic Bluetooth.

Hiện nay, có rất nhiều chuẩn Beacon như IBeacon của Apple, Eddystone của Google,... nhưng phổ biến nhất vẫn là 2 chuẩn IBeacon và Eddystone:

*IBeacon*: là một chuẩn do Apple đưa ra được ứng dụng rộng rãi trong hệ thống định vị trong nhà (Indoor Location). Một s ứng dụng tiềm năng của IBeacon là một nhận biết vị trí, ngữ cảnh , cảm biến nhỏ không dây có thể xác định vị trí của người sử dụng trong một cửa hàng . iBeacons có thể gửi thông báo của các mặt hàng gần đó được bán hoặc những mặt hàng khách hàng có thể tìm kiếm , và nó có thể cho phép thanh toán tại các điểm bán hàng (POS) mà khách hàng không cần phải mở ví ra hoặc đưa thẻ của họ để thực hiện thanh toán . IBeacon hứa hẹn là một  đối thủ cạnh tranh của Near Field Communication (Công nghệ NFC ).

*Eddystone*: đây là chuẩn Beacon do Google công bố nhằm cạnh tranh với IBeacon của Apple. Ngoài những tính năng tương tự như IBeacon, Eddystone còn một số tính năng hấp dẫn khác như:
- Quảng bá địa chỉ URL thông quan Eddystone-URL.

- Cung cấp thông tin ( nhiệt độ, mức điện áp,...) của thiết bị thông qua Eddystone-TLM.

- Quảng bá định danh thiết bị (tương tự IBeacon) thông qua Eddystone-UID.


## HardWare

Demo ứng dụng Beacon sử dụng phần cứng là module NRF51822-Beacon dựa trên chip NRF51822 của Nordic với các ưu điểm như: thiết kế nhỏ gọn chỉ bằng đồng xu, tiêu thụ năng lượng thấp ( có thể sử dụng 1,2 năm chỉ bằng một viên pin cmos)...

## App

Để có thể quét được Beacon, chúng ta cần sử dụng một chiếc điện thoại có hỗ trợ Bluetooth 4.0 trở lên đồng thời cài đặt thêm một áp để quét đó là: *NRF Connect*

[NRF Connect](image/beacon_app.png)

## Image

### Demo IBeacon

[Demo IBeacon](image/ibeacon.png)

### Demo Eddystone URL

Demo ứng dụng beacon nhằm giúp người dùng dễ dàng truy cập địa chỉ URL.

[Demo IBeacon](image/eddystone_url.png)

### Demo Eddystone TLM

Demo ứng dụng beacon nhằm kiểm soát điện áp và nhiệt độ của thiết bị phát Beacon.

[Demo Eddystone TLM](image/eddystone_tlm.png)
