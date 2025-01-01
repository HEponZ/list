#pragma once
#include <iostream>

using namespace std;

//����
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List() noexcept : head(nullptr), tail(nullptr) {}

    // ���������� �������� � ����� ������
    void append(int value)noexcept;

    // �������� �������� �� ����� ������
    void removeLast();

    // ������ ������
    void print() const noexcept;

    // ����� �������� � ������
    bool search(int value) const noexcept;

    // ���������� ��� ������������ ������
    ~List();
};