#include"thoiGian.h"

//hàm nhập 1 cấu trúc thời gian
void inputTime(Time& t)
{
	cout << "Nhap ngay: ", cin >> t.day;
	cout << "Nhap thang: ", cin >> t.month;
	cout << "Nhap nam: ", cin >> t.year;

	cout << "Nhap gio: ", cin >> t.hour;
	cout << "Nhap phut: ", cin >> t.minutes;
	cout << "Nhap giay: ", cin >> t.second;
}

//hàm xuất 1 cấu trúc thời gian
void outputTime(Time t)
{
	cout << t.day << "/" << t.month << "/" << t.year << "\t";
	cout << t.hour << ":" << t.minutes << ":" << t.second << endl;
}



//hàm đổi về giây để so sánh
//giả sử ta cho 1 năm có 365 ngày và 1 tháng có 30 ngày
float convertSecond(Time t) {
	//1 năm có 365 ngày, 1 ngày có 24h, 1h có 3600 giây
	float year = t.year * 365 * 24 * 3600;

	//1 tháng có 30 ngày, 1 ngày có 24h, 1h có 3600 giây
	float month = t.month * 30 * 24 * 3600;

	//1 ngày có 24h, 1h có 3600 giây
	float day = t.day * 24 * 3600;

	//1 giờ có 3600 giây
	float hour = t.hour * 3600;

	//1 phút 60 giây
	float minutes = t.minutes * 60;

	return year + month + day + hour + minutes + t.second;
}
