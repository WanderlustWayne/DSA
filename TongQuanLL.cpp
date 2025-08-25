#include <iostream>
using namespace std;

<<<<<<< HEAD
struct Node
{
=======
struct Node {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};
<<<<<<< HEAD
// Day 1: Linked List practice
// Day 1: Linked List practice// Day 1: Linked List practice
// In danh sách
void printList(Node *head)
{
=======

// In danh sách
void printList(Node *head) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    for (Node *p = head; p != nullptr; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

// Thêm node vào cuối danh sách
<<<<<<< HEAD
Node *addEnd(Node *head, int x)
{
    Node *newNode = new Node(x);
    if (!head)
        return newNode;
    Node *p = head;
    while (p->next)
        p = p->next;
=======
Node* addEnd(Node *head, int x) {
    Node *newNode = new Node(x);
    if (!head) return newNode;
    Node *p = head;
    while (p->next) p = p->next;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    p->next = newNode;
    return head;
}

// Thêm node vào đầu danh sách
<<<<<<< HEAD
Node *addHead(Node *head, int x)
{
=======
Node* addHead(Node *head, int x) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

// Thêm node vào vị trí k (1-based)
<<<<<<< HEAD
Node *addAt(Node *head, int k, int x)
{
    if (k <= 1)
        return addHead(head, x);
    Node *p = head;
    for (int i = 1; p && i < k - 1; ++i)
        p = p->next;
    if (!p)
        return head;
=======
Node* addAt(Node *head, int k, int x) {
    if (k <= 1) return addHead(head, x);
    Node *p = head;
    for (int i = 1; p && i < k - 1; ++i) p = p->next;
    if (!p) return head;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    Node *newNode = new Node(x);
    newNode->next = p->next;
    p->next = newNode;
    return head;
}

// Xóa node đầu
<<<<<<< HEAD
Node *deleteHead(Node *head)
{
    if (!head)
        return nullptr;
=======
Node* deleteHead(Node *head) {
    if (!head) return nullptr;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    Node *tmp = head->next;
    delete head;
    return tmp;
}
<<<<<<< HEAD
// đàcxsdvxc
//  Xóa node cuối
Node *deleteEnd(Node *head)
{
    if (!head || !head->next)
    {
=======

// Xóa node cuối
Node* deleteEnd(Node *head) {
    if (!head || !head->next) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
        delete head;
        return nullptr;
    }
    Node *p = head;
<<<<<<< HEAD
    while (p->next && p->next->next)
        p = p->next;
=======
    while (p->next && p->next->next) p = p->next;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    delete p->next;
    p->next = nullptr;
    return head;
}

// Xóa node ở vị trí k (1-based)
<<<<<<< HEAD
Node *deleteAt(Node *head, int k)
{
    if (k <= 1)
        return deleteHead(head);
    Node *p = head;
    for (int i = 1; p && p->next && i < k - 1; ++i)
        p = p->next;
    if (!p || !p->next)
        return head;
=======
Node* deleteAt(Node *head, int k) {
    if (k <= 1) return deleteHead(head);
    Node *p = head;
    for (int i = 1; p && p->next && i < k - 1; ++i) p = p->next;
    if (!p || !p->next) return head;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    Node *tmp = p->next;
    p->next = tmp->next;
    delete tmp;
    return head;
}

// Lấy giá trị node ở vị trí k (1-based)
<<<<<<< HEAD
int getNode(Node *head, int k)
{
    Node *p = head;
    for (int i = 1; p && i < k; ++i)
        p = p->next;
=======
int getNode(Node *head, int k) {
    Node *p = head;
    for (int i = 1; p && i < k; ++i) p = p->next;
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    return p ? p->data : -1;
}

// Đổi giá trị a thành b
<<<<<<< HEAD
void swapAB(Node *head, int a, int b)
{
    for (Node *p = head; p; p = p->next)
        if (p->data == a)
            p->data = b;
}

// Xóa các phần tử lớn hơn x, trả về danh sách mới
Node *deleteGreater(Node *head, int x)
{
    Node *newHead = nullptr, *tail = nullptr;
    for (Node *p = head; p; p = p->next)
    {
        if (p->data <= x)
        {
            Node *newNode = new Node(p->data);
            if (!newHead)
                newHead = tail = newNode;
            else
            {
=======
void swapAB(Node *head, int a, int b) {
    for (Node *p = head; p; p = p->next)
        if (p->data == a) p->data = b;
}

// Xóa các phần tử lớn hơn x, trả về danh sách mới
Node* deleteGreater(Node *head, int x) {
    Node *newHead = nullptr, *tail = nullptr;
    for (Node *p = head; p; p = p->next) {
        if (p->data <= x) {
            Node *newNode = new Node(p->data);
            if (!newHead) newHead = tail = newNode;
            else {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
                tail->next = newNode;
                tail = newNode;
            }
        }
    }
    return newHead;
}
<<<<<<< HEAD
// Day 1: Linked List practice

// Đảo ngược danh sách
Node *reverseList(Node *head)
{
    Node *prev = nullptr, *cur = head;
    while (cur)
    {
=======

// Đảo ngược danh sách
Node* reverseList(Node *head) {
    Node *prev = nullptr, *cur = head;
    while (cur) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
        Node *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

// Xóa tất cả node có giá trị k
<<<<<<< HEAD
Node *removeElements(Node *head, int k)
{
    while (head && head->data == k)
    {
=======
Node* removeElements(Node *head, int k) {
    while (head && head->data == k) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
    Node *p = head;
<<<<<<< HEAD
    while (p && p->next)
    {
        if (p->next->data == k)
        {
            Node *tmp = p->next;
            p->next = tmp->next;
            delete tmp;
        }
        else
        {
=======
    while (p && p->next) {
        if (p->next->data == k) {
            Node *tmp = p->next;
            p->next = tmp->next;
            delete tmp;
        } else {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
            p = p->next;
        }
    }
    return head;
}

<<<<<<< HEAD
int main()
{
    int n, x;
    cin >> n;
    Node *head = nullptr;
    for (int i = 0; i < n; ++i)
    {
=======
int main() {
    int n, x;
    cin >> n;
    Node *head = nullptr;
    for (int i = 0; i < n; ++i) {
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
        cin >> x;
        head = addEnd(head, x);
    }
    printList(head);

    // Ví dụ sử dụng các hàm:
    // head = addHead(head, 5);
    // head = addEnd(head, 8);
    // head = addAt(head, 2, 1);
    // head = deleteAt(head, 4);
    // head = deleteEnd(head);
    // head = deleteHead(head);
    // cout << getNode(head, 4) << endl;
    // swapAB(head, 0, 1);
    // head = deleteGreater(head, 10);
    // head = reverseList(head);
    head = removeElements(head, 10);

    printList(head);
    // Giải phóng bộ nhớ
<<<<<<< HEAD
    while (head)
        head = deleteHead(head);
=======
    while (head) head = deleteHead(head);
>>>>>>> 2fbcbe9a8ddb96eec9fc32c72dd7bbef917a25dc
    return 0;
}
