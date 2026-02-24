// Code khởi tạo STM32F103
int main() {
    SystemClock_Config();
    SPI_Init(Fast_Mode); // Thêm dòng này ở nhánh SD Card
    RFID_Init(); // Vừa code thêm dòng này
    // TODO: Cấu hình ngoại vi ở đây
    while(1) {
        // Vòng lặp chính
    }
}