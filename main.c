// Code khởi tạo STM32F103
int main() {
    SystemClock_Config();
    SPI_Init(Slow_Mode); // Thêm dòng này ở nhánh main
    RFID_Init(); // Vừa code thêm dòng này
    // TODO: Cấu hình ngoại vi ở đây
    while(1) {
        // Vòng lặp chính
    }
}