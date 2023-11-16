#include <iostream>
#include <string>
#include <map>

// Define the node structure
struct Node {
    std::string data;
    Node* next;
};

// Function to print the linked list
void printList(Node* n) {
    while (n != nullptr) {
        std::cout << n->data << " ";
        n = n->next;
    }
    std::cout << std::endl;
}

// Function to add a new node at the end
void append(Node** head_ref, std::string new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = new_node;
    return;
}

// Function to retrieve the linked list based on the train number
Node* getTrainLinkedList(std::map<int, Node*>& trains, int train_number) {
    if (trains.find(train_number) != trains.end()) {
        return trains[train_number];
    } else {
        return nullptr;
    }
}

int main() {
    // Map to hold linked lists for different train numbers
    std::map<int, Node*> trains;

    // Adding linked lists for different train numbers
    trains[22436] = nullptr;
    append(&trains[22436], "C1");
    append(&trains[22436], "C2");
    append(&trains[22436], "C3");
    append(&trains[22436], "C4");
    append(&trains[22436], "C5");
    append(&trains[22436], "C6");
    append(&trains[22436], "C7");
    append(&trains[22436], "E1");
    append(&trains[22436], "E2");
    append(&trains[22436], "C8");
    append(&trains[22436], "C9");
    append(&trains[22436], "C10");
    append(&trains[22436], "C11");
    append(&trains[22436], "C12");
    append(&trains[22436], "C13");
    append(&trains[22436], "C14");



      trains[20978] = nullptr;
     append(&trains[20978], "C14");
    append(&trains[20978], "C13");
    append(&trains[20978], "C12");
    append(&trains[20978], "C11");
    append(&trains[20978], "C10");
    append(&trains[20978], "C9");
    append(&trains[20978], "C8");
    append(&trains[20978], "E2");
    append(&trains[20978], "E1");
    append(&trains[20978], "C7");
    append(&trains[20978], "C6");
    append(&trains[20978], "C5");
    append(&trains[20978], "C4");
    append(&trains[20978], "C3");
    append(&trains[20978], "C2");
    append(&trains[20978], "C1");


    trains[22435] = nullptr;
    append(&trains[22435], "C14");
    append(&trains[22435], "C13");
    append(&trains[22435], "C12");
    append(&trains[22435], "C11");
    append(&trains[22435], "C10");
    append(&trains[22435], "C9");
    append(&trains[22435], "C8");
    append(&trains[22435], "E2");
    append(&trains[22435], "E1");
    append(&trains[22435], "C7");
    append(&trains[22435], "C6");
    append(&trains[22435], "C5");
    append(&trains[22435], "C4");
    append(&trains[22435], "C3");
    append(&trains[22435], "C2");
    append(&trains[22435], "C1");


 trains[22439] = nullptr;
    append(&trains[22439], "C1");
    append(&trains[22439], "C2");
    append(&trains[22439], "C3");
    append(&trains[22439], "C4");
    append(&trains[22439], "C5");
    append(&trains[22439], "C6");
    append(&trains[22439], "C7");
    append(&trains[22439], "E1");
    append(&trains[22439], "E2");
    append(&trains[22439], "C8");
    append(&trains[22439], "C9");
    append(&trains[22439], "C10");
    append(&trains[22439], "C11");
    append(&trains[22439], "C12");
    append(&trains[22439], "C13");
    append(&trains[22439], "C14");


trains[22440] = nullptr;
    append(&trains[22440], "C14");
    append(&trains[22440], "C13");
    append(&trains[22440], "C12");
    append(&trains[22440], "C11");
    append(&trains[22440], "C10");
    append(&trains[22440], "C9");
    append(&trains[22440], "C8");
    append(&trains[22440], "E2");
    append(&trains[22440], "E1");
    append(&trains[22440], "C7");
    append(&trains[22440], "C6");
    append(&trains[22440], "C5");
    append(&trains[22440], "C4");
    append(&trains[22440], "C3");
    append(&trains[22440], "C2");
    append(&trains[22440], "C1");


    trains[20901] = nullptr;
    append(&trains[20901], "C1");
    append(&trains[20901], "C2");
    append(&trains[20901], "C3");
    append(&trains[20901], "C4");
    append(&trains[20901], "C5");
    append(&trains[20901], "C6");
    append(&trains[20901], "C7");
    append(&trains[20901], "E1");
    append(&trains[20901], "E2");
    append(&trains[20901], "C8");
    append(&trains[20901], "C9");
    append(&trains[20901], "C10");
    append(&trains[20901], "C11");
    append(&trains[20901], "C12");
    append(&trains[20901], "C13");
    append(&trains[20901], "C14");



     trains[20902] = nullptr;
    append(&trains[20902], "C14");
    append(&trains[20902], "C13");
    append(&trains[20902], "C12");
    append(&trains[20902], "C11");
    append(&trains[20902], "C10");
    append(&trains[20902], "C9");
    append(&trains[20902], "C8");
    append(&trains[20902], "E2");
    append(&trains[20902], "E1");
    append(&trains[20902], "C7");
    append(&trains[20902], "C6");
    append(&trains[20902], "C5");
    append(&trains[20902], "C4");
    append(&trains[20902], "C3");
    append(&trains[20902], "C2");
    append(&trains[20902], "C1");


     trains[22447] = nullptr;
    append(&trains[22447], "C1");
    append(&trains[22447], "C2");
    append(&trains[22447], "C3");
    append(&trains[22447], "C4");
    append(&trains[22447], "C5");
    append(&trains[22447], "C6");
    append(&trains[22447], "C7");
    append(&trains[22447], "E1");
    append(&trains[22447], "E2");
    append(&trains[22447], "C8");
    append(&trains[22447], "C9");
    append(&trains[22447], "C10");
    append(&trains[22447], "C11");
    append(&trains[22447], "C12");
    append(&trains[22447], "C13");
    append(&trains[22447], "C14");


    trains[22448] = nullptr;
    append(&trains[22448], "C14");
    append(&trains[22448], "C13");
    append(&trains[22448], "C12");
    append(&trains[22448], "C11");
    append(&trains[22448], "C10");
    append(&trains[22448], "C9");
    append(&trains[22448], "C8");
    append(&trains[22448], "E2");
    append(&trains[22448], "E1");
    append(&trains[22448], "C7");
    append(&trains[22448], "C6");
    append(&trains[22448], "C5");
    append(&trains[22448], "C4");
    append(&trains[22448], "C3");
    append(&trains[22448], "C2");
    append(&trains[22448], "C1");

 trains[20607] = nullptr;
    append(&trains[20607], "C1");
    append(&trains[20607], "C2");
    append(&trains[20607], "C3");
    append(&trains[20607], "C4");
    append(&trains[20607], "C5");
    append(&trains[20607], "C6");
    append(&trains[20607], "C7");
    append(&trains[20607], "E1");
    append(&trains[20607], "E2");
    append(&trains[20607], "C8");
    append(&trains[20607], "C9");
    append(&trains[20607], "C10");
    append(&trains[20607], "C11");
    append(&trains[20607], "C12");
    append(&trains[20607], "C13");
    append(&trains[20607], "C14");
    

     trains[20608] = nullptr;
    append(&trains[20608], "C14");
    append(&trains[20608], "C13");
    append(&trains[20608], "C12");
    append(&trains[20608], "C11");
    append(&trains[20608], "C10");
    append(&trains[20608], "C9");
    append(&trains[20608], "C8");
    append(&trains[20608], "E2");
    append(&trains[20608], "E1");
    append(&trains[20608], "C7");
    append(&trains[20608], "C6");
    append(&trains[20608], "C5");
    append(&trains[20608], "C4");
    append(&trains[20608], "C3");
    append(&trains[20608], "C2");
    append(&trains[20608], "C1");


    trains[20826] = nullptr;
    append(&trains[20826], "C1");
    append(&trains[20826], "C2");
    append(&trains[20826], "C3");
    append(&trains[20826], "C4");
    append(&trains[20826], "C5");
    append(&trains[20826], "E1");
    append(&trains[20826], "C6");
    append(&trains[20826], "C7");



trains[20825] = nullptr;
    append(&trains[20825], "C7");
    append(&trains[20825], "C6");
    append(&trains[20825], "E1");
    append(&trains[20825], "C5");
    append(&trains[20825], "C4");
    append(&trains[20825], "C3");
    append(&trains[20825], "C2");
    append(&trains[20825], "C1");


     trains[22301] = nullptr;
    append(&trains[22301], "C1");
    append(&trains[22301], "C2");
    append(&trains[22301], "C3");
    append(&trains[22301], "C4");
    append(&trains[22301], "C5");
    append(&trains[22301], "C6");
    append(&trains[22301], "C7");
    append(&trains[22301], "E1");
    append(&trains[22301], "E2");
    append(&trains[22301], "C8");
    append(&trains[22301], "C9");
    append(&trains[22301], "C10");
    append(&trains[22301], "C11");
    append(&trains[22301], "C12");
    append(&trains[22301], "C13");
    append(&trains[22301], "C14");


 trains[22302] = nullptr;
    append(&trains[22302], "C14");
    append(&trains[22302], "C13");
    append(&trains[22302], "C12");
    append(&trains[22302], "C11");
    append(&trains[22302], "C10");
    append(&trains[22302], "C9");
    append(&trains[22302], "C8");
    append(&trains[22302], "E2");
    append(&trains[22302], "E1");
    append(&trains[22302], "C7");
    append(&trains[22302], "C6");
    append(&trains[22302], "C5");
    append(&trains[22302], "C4");
    append(&trains[22302], "C3");
    append(&trains[22302], "C2");
    append(&trains[22302], "C1");


    trains[20833] = nullptr;
    append(&trains[20833], "C1");
    append(&trains[20833], "C2");
    append(&trains[20833], "C3");
    append(&trains[20833], "C4");
    append(&trains[20833], "C5");
    append(&trains[20833], "C6");
    append(&trains[20833], "C7");
    append(&trains[20833], "E1");
    append(&trains[20833], "E2");
    append(&trains[20833], "C8");
    append(&trains[20833], "C9");
    append(&trains[20833], "C10");
    append(&trains[20833], "C11");
    append(&trains[20833], "C12");
    append(&trains[20833], "C13");
    append(&trains[20833], "C14");

  trains[20834] = nullptr;
    append(&trains[20834], "C1");
    append(&trains[20834], "C2");
    append(&trains[20834], "C3");
    append(&trains[20834], "C4");
    append(&trains[20834], "C5");
    append(&trains[20834], "C6");
    append(&trains[20834], "C7");
    append(&trains[20834], "E1");
    append(&trains[20834], "E2");
    append(&trains[20834], "C8");
    append(&trains[20834], "C9");
    append(&trains[20834], "C10");
    append(&trains[20834], "C11");
    append(&trains[20834], "C12");
    append(&trains[20834], "C13");
    append(&trains[20834], "C14");


    trains[22225] = nullptr;
    append(&trains[22225], "C1");
    append(&trains[22225], "C2");
    append(&trains[22225], "C3");
    append(&trains[22225], "C4");
    append(&trains[22225], "C5");
    append(&trains[22225], "C6");
    append(&trains[22225], "C7");
    append(&trains[22225], "E1");
    append(&trains[22225], "E2");
    append(&trains[22225], "C8");
    append(&trains[22225], "C9");
    append(&trains[22225], "C10");
    append(&trains[22225], "C11");
    append(&trains[22225], "C12");
    append(&trains[22225], "C13");
    append(&trains[22225], "C14");

   trains[22226] = nullptr;
    append(&trains[22226], "C14");
    append(&trains[22226], "C13");
    append(&trains[22226], "C12");
    append(&trains[22226], "C11");
    append(&trains[22226], "C10");
    append(&trains[22226], "C9");
    append(&trains[22226], "C8");
    append(&trains[22226], "E2");
    append(&trains[22226], "E1");
    append(&trains[22226], "C7");
    append(&trains[22226], "C6");
    append(&trains[22226], "C5");
    append(&trains[22226], "C4");
    append(&trains[22226], "C3");
    append(&trains[22226], "C2");
    append(&trains[22226], "C1");


     trains[22224] = nullptr;
    append(&trains[22224], "C14");
    append(&trains[22224], "C13");
    append(&trains[22224], "C12");
    append(&trains[22224], "C11");
    append(&trains[22224], "C10");
    append(&trains[22224], "C9");
    append(&trains[22224], "C8");
    append(&trains[22224], "E2");
    append(&trains[22224], "E1");
    append(&trains[22224], "C7");
    append(&trains[22224], "C6");
    append(&trains[22224], "C5");
    append(&trains[22224], "C4");
    append(&trains[22224], "C3");
    append(&trains[22224], "C2");
    append(&trains[22224], "C1");



        trains[22223] = nullptr;
    append(&trains[22223], "C1");
    append(&trains[22223], "C2");
    append(&trains[22223], "C3");
    append(&trains[22223], "C4");
    append(&trains[22223], "C5");
    append(&trains[22223], "C6");
    append(&trains[22223], "C7");
    append(&trains[22223], "E1");
    append(&trains[22223], "E2");
    append(&trains[22223], "C8");
    append(&trains[22223], "C9");
    append(&trains[22223], "C10");
    append(&trains[22223], "C11");
    append(&trains[22223], "C12");
    append(&trains[22223], "C13");
    append(&trains[22223], "C14");


     trains[20171] = nullptr;
    append(&trains[20171], "C1");
    append(&trains[20171], "C2");
    append(&trains[20171], "C3");
    append(&trains[20171], "C4");
    append(&trains[20171], "C5");
    append(&trains[20171], "C6");
    append(&trains[20171], "C7");
    append(&trains[20171], "E1");
    append(&trains[20171], "E2");
    append(&trains[20171], "C8");
    append(&trains[20171], "C9");
    append(&trains[20171], "C10");
    append(&trains[20171], "C11");
    append(&trains[20171], "C12");
    append(&trains[20171], "C13");
    append(&trains[20171], "C14");


       trains[20172] = nullptr;
    append(&trains[20172], "C14");
    append(&trains[20172], "C13");
    append(&trains[20172], "C12");
    append(&trains[20172], "C11");
    append(&trains[20172], "C10");
    append(&trains[20172], "C9");
    append(&trains[20172], "C8");
    append(&trains[20172], "E2");
    append(&trains[20172], "E1");
    append(&trains[20172], "C7");
    append(&trains[20172], "C6");
    append(&trains[20172], "C5");
    append(&trains[20172], "C4");
    append(&trains[20172], "C3");
    append(&trains[20172], "C2");
    append(&trains[20172], "C1");

    trains[20702] = nullptr;
    append(&trains[20702], "C14");
    append(&trains[20702], "C13");
    append(&trains[20702], "C12");
    append(&trains[20702], "C11");
    append(&trains[20702], "C10");
    append(&trains[20702], "C9");
    append(&trains[20702], "C8");
    append(&trains[20702], "E2");
    append(&trains[20702], "E1");
    append(&trains[20702], "C7");
    append(&trains[20702], "C6");
    append(&trains[20702], "C5");
    append(&trains[20702], "C4");
    append(&trains[20702], "C3");
    append(&trains[20702], "C2");
    append(&trains[20702], "C1");



    trains[20701] = nullptr;
    append(&trains[20701], "C1");
    append(&trains[20701], "C2");
    append(&trains[20701], "C3");
    append(&trains[20701], "C4");
    append(&trains[20701], "C5");
    append(&trains[20701], "C6");
    append(&trains[20701], "C7");
    append(&trains[20701], "E1");
    append(&trains[20701], "E2");
    append(&trains[20701], "C8");
    append(&trains[20701], "C9");
    append(&trains[20701], "C10");
    append(&trains[20701], "C11");
    append(&trains[20701], "C12");
    append(&trains[20701], "C13");
    append(&trains[20701], "C14");




    trains[20701] = nullptr;
    append(&trains[20701], "C1");
    append(&trains[20701], "C2");
    append(&trains[20701], "C3");
    append(&trains[20701], "C4");
    append(&trains[20701], "C5");
    append(&trains[20701], "C6");
    append(&trains[20701], "C7");
    append(&trains[20701], "E1");
    append(&trains[20701], "E2");
    append(&trains[20701], "C8");
    append(&trains[20701], "C9");
    append(&trains[20701], "C10");
    append(&trains[20701], "C11");
    append(&trains[20701], "C12");
    append(&trains[20701], "C13");
    append(&trains[20701], "C14");


      trains[20644] = nullptr;
    append(&trains[20644], "C7");
    append(&trains[20644], "C6");
    append(&trains[20644], "E1");
    append(&trains[20644], "C5");
    append(&trains[20644], "C4");
    append(&trains[20644], "C3");
    append(&trains[20644], "C2");
    append(&trains[20644], "C1");



     trains[22227] = nullptr;
    append(&trains[22227], "C1");
    append(&trains[22227], "C2");
    append(&trains[22227], "C3");
    append(&trains[22227], "C4");
    append(&trains[22227], "C5");
    append(&trains[22227], "E1");
    append(&trains[22227], "C6");
    append(&trains[22227], "C7");


    trains[22228] = nullptr;
    append(&trains[22228], "C1");
    append(&trains[22228], "C2");
    append(&trains[22228], "C3");
    append(&trains[22228], "C4");
    append(&trains[22228], "C5");
    append(&trains[22228], "E1");
    append(&trains[22228], "C6");
    append(&trains[22228], "C7");



     trains[20977] = nullptr;
    append(&trains[20977], "C1");
    append(&trains[20977], "C2");
    append(&trains[20977], "C3");
    append(&trains[20977], "C4");
    append(&trains[20977], "C5");
    append(&trains[20977], "C6");
    append(&trains[20977], "C7");
    append(&trains[20977], "E1");
    append(&trains[20977], "E2");
    append(&trains[20977], "C8");
    append(&trains[20977], "C9");
    append(&trains[20977], "C10");
    append(&trains[20977], "C11");
    append(&trains[20977], "C12");
    append(&trains[20977], "C13");
    append(&trains[20977], "C14");


     trains[20977] = nullptr;
    append(&trains[20977], "C1");
    append(&trains[20977], "C2");
    append(&trains[20977], "C3");
    append(&trains[20977], "C4");
    append(&trains[20977], "C5");
    append(&trains[20977], "C6");
    append(&trains[20977], "C7");
    append(&trains[20977], "E1");
    append(&trains[20977], "E2");
    append(&trains[20977], "C8");
    append(&trains[20977], "C9");
    append(&trains[20977], "C10");
    append(&trains[20977], "C11");
    append(&trains[20977], "C12");
    append(&trains[20977], "C13");
    append(&trains[20977], "C14");


    trains[20634] = nullptr;
    append(&trains[20634], "C1");
    append(&trains[20634], "C2");
    append(&trains[20634], "C3");
    append(&trains[20634], "C4");
    append(&trains[20634], "C5");
    append(&trains[20634], "C6");
    append(&trains[20634], "C7");
    append(&trains[20634], "E1");
    append(&trains[20634], "E2");
    append(&trains[20634], "C8");
    append(&trains[20634], "C9");
    append(&trains[20634], "C10");
    append(&trains[20634], "C11");
    append(&trains[20634], "C12");
    append(&trains[20634], "C13");
    append(&trains[20634], "C14");


      trains[22895] = nullptr;
    append(&trains[22895], "C1");
    append(&trains[22895], "C2");
    append(&trains[22895], "C3");
    append(&trains[22895], "C4");
    append(&trains[22895], "C5");
    append(&trains[22895], "C6");
    append(&trains[22895], "C7");
    append(&trains[22895], "E1");
    append(&trains[22895], "E2");
    append(&trains[22895], "C8");
    append(&trains[22895], "C9");
    append(&trains[22895], "C10");
    append(&trains[22895], "C11");
    append(&trains[22895], "C12");
    append(&trains[22895], "C13");
    append(&trains[22895], "C14");


     trains[22896] = nullptr;
    append(&trains[22896], "C14");
    append(&trains[22896], "C13");
    append(&trains[22896], "C12");
    append(&trains[22896], "C11");
    append(&trains[22896], "C10");
    append(&trains[22896], "C9");
    append(&trains[22896], "C8");
    append(&trains[22896], "E2");
    append(&trains[22896], "E1");
    append(&trains[22896], "C7");
    append(&trains[22896], "C6");
    append(&trains[22896], "C5");
    append(&trains[22896], "C4");
    append(&trains[22896], "C3");
    append(&trains[22896], "C2");
    append(&trains[22896], "C1");

    trains[22925] = nullptr;
append(&trains[22925], "C1");
append(&trains[22925], "C2");
append(&trains[22925], "C3");
append(&trains[22925], "C4");
append(&trains[22925], "C5");
append(&trains[22925], "C6");
append(&trains[22925], "C7");
append(&trains[22925],"E1");

// Adding linked lists for train number 22926
trains[22926] = nullptr;
append(&trains[22926], "C7");
append(&trains[22926], "C6");
append(&trains[22926], "E1");
append(&trains[22926], "C5");
append(&trains[22926], "C4");
append(&trains[22926], "C3");
append(&trains[22926], "C2");
append(&trains[22926], "C1");

// Adding linked lists for train number 20898
trains[20898] = nullptr;
append(&trains[20898], "C1");
append(&trains[20898], "C2");
append(&trains[20898], "C3");
append(&trains[20898], "C4");
append(&trains[20898], "C5");
append(&trains[20898], "C6");
append(&trains[20898], "C7");
append(&trains[20898], "E1");

// Adding linked lists for train number 20980
trains[20980] = nullptr;
append(&trains[20980], "COR");
append(&trains[20980], "C1");
append(&trains[20980], "C2");
append(&trains[20980], "C3");
append(&trains[20980], "C4");
append(&trains[20980], "C5");
append(&trains[20980], "C6");
append(&trains[20980], "C7");
append(&trains[20980], "E1");

// Adding linked lists for train number 20897
trains[20897] = nullptr;
append(&trains[20897], "C1");
append(&trains[20897], "C2");
append(&trains[20897], "C3");
append(&trains[20897], "C4");
append(&trains[20897], "C5");
append(&trains[20897], "C6");
append(&trains[20897], "C7");
append(&trains[20897], "E1");


// Adding linked lists for train number 20979
trains[20979] = nullptr;
append(&trains[20979], "COR");
append(&trains[20979], "C1");
append(&trains[20979], "C2");
append(&trains[20979], "C3");
append(&trains[20979], "C4");
append(&trains[20979], "C5");
append(&trains[20979], "C6");
append(&trains[20979], "C7");
append(&trains[20979], "E1");

// Adding linked lists for train number 20678
trains[20678] = nullptr;
append(&trains[20678], "C7");
append(&trains[20678], "C6");
append(&trains[20678], "C5");
append(&trains[20678], "C4");
append(&trains[20678], "C3");
append(&trains[20678], "C2");
append(&trains[20678], "C1");
append(&trains[20678], "E1");

// Adding linked lists for train number 20677
trains[20677] = nullptr;
append(&trains[20677], "C1");
append(&trains[20677], "C2");
append(&trains[20677], "E1");
append(&trains[20677], "C3");
append(&trains[20677], "C4");
append(&trains[20677], "C5");
append(&trains[20677], "C6");
append(&trains[20677], "C7");

// Adding linked lists for train number 20632
trains[20632] = nullptr;
append(&trains[20632], "C1");
append(&trains[20632], "C2");
append(&trains[20632], "C3");
append(&trains[20632], "C4");
append(&trains[20632], "C5");
append(&trains[20632], "E1");
append(&trains[20632], "C6");
append(&trains[20632], "C7");

// Adding linked lists for train number 20631
trains[20631] = nullptr;
append(&trains[20631], "C7");
append(&trains[20631], "C6");
append(&trains[20631], "E1");
append(&trains[20631], "C5");
append(&trains[20631], "C4");
append(&trains[20631], "C3");
append(&trains[20631], "C2");
append(&trains[20631], "C1");

// Adding linked lists for train number 20704
trains[20704] = nullptr;
append(&trains[20704], "C7");
append(&trains[20704], "C6");
append(&trains[20704], "E1");
append(&trains[20704], "C5");
append(&trains[20704], "C4");
append(&trains[20704], "C3");
append(&trains[20704], "C2");
append(&trains[20704], "C1");


// Adding linked lists for train number 20703
trains[20703] = nullptr;
append(&trains[20703], "C1");
append(&trains[20703], "C2");
append(&trains[20703], "C3");
append(&trains[20703], "C4");
append(&trains[20703], "C5");
append(&trains[20703], "E1");
append(&trains[20703], "C6");
append(&trains[20703], "C7");

// Adding linked lists for train number 20665
trains[20665] = nullptr;
append(&trains[20665], "C1");
append(&trains[20665], "C2");
append(&trains[20665], "E1");
append(&trains[20665], "C3");
append(&trains[20665], "C4");
append(&trains[20665], "C5");
append(&trains[20665], "C6");
append(&trains[20665], "C7");

// Adding linked lists for train number 20666
trains[20666] = nullptr;
append(&trains[20666], "C7");
append(&trains[20666], "C6");
append(&trains[20666], "E1");
append(&trains[20666], "C5");
append(&trains[20666], "C4");
append(&trains[20666], "C3");
append(&trains[20666], "C2");
append(&trains[20666], "C1");

// Adding linked lists for train number 20835
trains[20835] = nullptr;
append(&trains[20835], "C7");
append(&trains[20835], "C6");
append(&trains[20835], "C5");
append(&trains[20835], "C4");
append(&trains[20835], "C3");
append(&trains[20835], "E1");
append(&trains[20835], "C2");
append(&trains[20835], "C1");

// Adding linked lists for train number 20836
trains[20836] = nullptr;
append(&trains[20836], "C1");
append(&trains[20836], "C2");
append(&trains[20836], "E1");
append(&trains[20836], "C3");
append(&trains[20836], "C4");
append(&trains[20836], "C5");
append(&trains[20836], "C6");
append(&trains[20836], "C7");

// Adding linked lists for train number 22347
trains[22347] = nullptr;
append(&trains[22347], "C7");
append(&trains[22347], "C6");
append(&trains[22347], "C5");
append(&trains[22347], "C4");
append(&trains[22347], "C3");
append(&trains[22347], "E1");
append(&trains[22347], "C2");
append(&trains[22347], "C1");

// Adding linked lists for train number 22348
trains[22348] = nullptr;
append(&trains[22348], "C1");
append(&trains[22348], "C2");
append(&trains[22348], "E1");
append(&trains[22348], "C3");
append(&trains[22348], "C4");
append(&trains[22348], "C5");
append(&trains[22348], "C6");
append(&trains[22348], "C7");

// Adding linked lists for train number 22549
trains[22549] = nullptr;
append(&trains[22549], "C1");
append(&trains[22549], "C2");
append(&trains[22549], "E1");
append(&trains[22549], "C3");
append(&trains[22549], "C4");
append(&trains[22549], "C5");
append(&trains[22549], "C6");
append(&trains[22549], "C7");

// Adding linked lists for train number 22550
trains[22550] = nullptr;
append(&trains[22550], "C7");
append(&trains[22550], "C6");
append(&trains[22550], "C5");
append(&trains[22550], "C4");
append(&trains[22550], "C3");
append(&trains[22550], "E1");
append(&trains[22550], "C2");
append(&trains[22550], "C1");

// Adding linked lists for train number 12462
trains[12462] = nullptr;
append(&trains[12462], "C7");
append(&trains[12462], "C6");
append(&trains[12462], "C5");
append(&trains[12462], "C4");
append(&trains[12462], "C3");
append(&trains[12462], "E1");
append(&trains[12462], "C2");
append(&trains[12462], "C1");

// Adding linked lists for train number 12461
trains[12461] = nullptr;
append(&trains[12461], "C1");
append(&trains[12461], "C2");
append(&trains[12461], "E1");
append(&trains[12461], "C3");
append(&trains[12461], "C4");
append(&trains[12461], "C5");
append(&trains[12461], "C6");
append(&trains[12461], "C7");


// Adding linked lists for train number 20173
trains[20173] = nullptr;
append(&trains[20173], "C1");
append(&trains[20173], "C2");
append(&trains[20173], "E1");
append(&trains[20173], "C3");
append(&trains[20173], "C4");
append(&trains[20173], "C5");
append(&trains[20173], "C6");
append(&trains[20173], "C7");
append(&trains[20173], "ET");

// Adding linked lists for train number 20174
trains[20174] = nullptr;
append(&trains[20174], "C1");
append(&trains[20174], "C2");
append(&trains[20174], "E1");
append(&trains[20174], "C3");
append(&trains[20174], "C4");
append(&trains[20174], "C5");
append(&trains[20174], "C6");
append(&trains[20174], "C7");
append(&trains[20174], "ET");

// Adding linked lists for train number 20662
trains[20662] = nullptr;
append(&trains[20662], "C1");
append(&trains[20662], "C2");
append(&trains[20662], "E1");
append(&trains[20662], "C3");
append(&trains[20662], "C4");
append(&trains[20662], "C5");
append(&trains[20662], "C6");
append(&trains[20662], "C7");

// Adding linked lists for train number 20661
trains[20661] = nullptr;
append(&trains[20661], "C7");
append(&trains[20661], "C6");
append(&trains[20661], "C5");
append(&trains[20661], "C4");
append(&trains[20661], "C3");
append(&trains[20661], "E1");
append(&trains[20661], "C2");
append(&trains[20661], "C1");

// Adding linked lists for train number 20912
trains[20912] = nullptr;
append(&trains[20912], "C1");
append(&trains[20912], "C2");
append(&trains[20912], "C3");
append(&trains[20912], "C4");
append(&trains[20912], "C5");
append(&trains[20912], "E1");
append(&trains[20912], "C6");
append(&trains[20912], "C7");

// Adding linked lists for train number 20911
trains[20911] = nullptr;
append(&trains[20911], "C7");
append(&trains[20911], "C6");
append(&trains[20911], "E1");
append(&trains[20911], "C5");
append(&trains[20911], "C4");
append(&trains[20911], "C3");
append(&trains[20911], "C2");
append(&trains[20911], "C1");

// Adding linked lists for train number 22350
trains[22350] = nullptr;
append(&trains[22350], "C7");
append(&trains[22350], "C6");
append(&trains[22350], "E1");
append(&trains[22350], "C5");
append(&trains[22350], "C4");
append(&trains[22350], "C3");
append(&trains[22350], "C2");
append(&trains[22350], "C1");








     
    // Get the train number from the user
    int input_train_number;
    std::cout << "Enter the train number: ";
    std::cin >> input_train_number;

    // Get the linked list for the user-provided train number
    Node* selected_train = getTrainLinkedList(trains, input_train_number);

    // Print the linked list for the selected train number
    if (selected_train != nullptr) {
        std::cout << "COACH POSITION OF TRAIN  " << input_train_number << ":" << std::endl;
        printList(selected_train);
    } else {
        std::cout << "Train not found." << std::endl;
    }

    return 0;
}

