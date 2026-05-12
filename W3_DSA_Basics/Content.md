# DSA Basics

## 1. Data Structures

### Array
- Là cấu trúc dữ liệu lưu nhiều phần tử cùng kiểu, lưu liên tiếp trong bộ nhớ.
- Truy cập theo chỉ số: `arr[i]` là `O(1)`.
- Thêm/xóa ở cuối mảng thường là `O(1)` nếu còn chỗ trống.
- Thêm/xóa ở giữa hoặc đầu mảng cần dịch chuyển phần tử, nên là `O(n)`.

### Linked List
- Là danh sách các node, mỗi node có giá trị và con trỏ đến node tiếp theo.
- Không lưu liên tiếp trong bộ nhớ như mảng nên kích thước có thể thay đổi linh hoạt.
- Truy cập phần tử ở vị trí bất kỳ là `O(n)` vì phải duyệt từ đầu.
- Thêm/xóa ở đầu hoặc sau node đã biết là `O(1)`.

### Stack
- Nguyên tắc LIFO (Last In, First Out): phần tử vào cuối cùng sẽ ra đầu tiên.
- Thao tác cơ bản: `push` (đẩy vào) và `pop` (lấy ra).
- Ví dụ: undo/redo, kiểm tra dấu ngoặc, duyệt đệ quy.
- `push/pop` thường thực hiện trong `O(1)`.

### Queue
- Nguyên tắc FIFO (First In, First Out): phần tử vào trước sẽ ra trước.
- Thao tác cơ bản: `enqueue` (đưa vào) và `dequeue` (lấy ra).
- Ví dụ thực tế: hàng đợi API request, MQ, Kafka, hệ thống xử lý tin nhắn.
- `enqueue/dequeue` thường là `O(1)`.

### Hash Table
- Lưu cặp `key -> value` bằng cách dùng hàm băm (`hash function`).
- Truy xuất theo key trung bình là `O(1)`.
- Vấn đề chính là collision (va chạm) khi hai key khác nhau có cùng bucket.
- Cách xử lý collision: chaining (mỗi bucket là danh sách) hoặc open addressing.

## 2. Halting problem
- Bài toán dừng: có tồn tại chương trình `H` kiểm tra được mọi chương trình `P` với mọi đầu vào `x` và trả lời được `P` dừng hay không dừng không?
- Kết luận: không có thuật toán tổng quát giải được mọi trường hợp.
- Đây là một bài toán cơ bản của lý thuyết tính toán và lý do một số vấn đề không thể tự động giải quyết.

## 3. Các chiến lược giải thuật
- **Brute force**
  - Thử mọi khả năng có thể.
  - Đơn giản nhưng thường rất chậm vì độ phức tạp cao.
- **Greedy**
  - Tại mỗi bước, chọn phương án tốt nhất hiện tại.
  - Không phải lúc nào cũng cho lời giải tối ưu toàn cục, nhưng nhanh và dễ triển khai.
  - Ví dụ: chọn đồng xu lớn nhất để đổi tiền (nếu hệ số chia phù hợp).
- **Divide & conquer**
  - Chia bài toán lớn thành các bài toán con nhỏ hơn, giải từng phần và gộp kết quả.
  - Ví dụ: Merge Sort, Quick Sort, tìm kiếm nhị phân.

## 4. Big O — đo độ phức tạp thuật toán

## 5. Ví dụ tóm tắt để dễ nhớ
- `O(1)` — truy cập trực tiếp, phép toán đơn.
- `O(log n)` — cắt đôi dữ liệu mỗi bước (binary search).
- `O(n)` — một vòng lặp qua `n` phần tử.
- `O(n log n)` 
- `O(n^2)` — hai vòng lặp lồng nhau.
- `O(2^n)` / `O(n!)` 

## 6. Bài tập về nhà
  - [BinarySearch.cpp](BinarySearch.cpp)
  - [BubbleSort.cpp](BubbleSort.cpp)
  - 3 bài leetcode easy:
    + [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/solutions/8197207/9-palindrome-number-by-reine-oeo4)
    + [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/solutions/8197249/longest-common-prefix-by-reine-c1fc)
    + [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/8197262/remove-duplicates-from-sorted-array-by-r-ztub)

