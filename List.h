#pragma once
#include <iostream>

using namespace std;

//узел
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

    // Добавление элемента в конец списка
    void append(int value)noexcept;

    // Удаление элемента из конца списка
    void removeLast();

    // Печать списка
    void print() const noexcept;

    // Поиск элемента в списке
    bool search(int value) const noexcept;

    // Деструктор для освобождения памяти
    ~List();
};