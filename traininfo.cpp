#include <iostream>
#include <string>
using namespace std;

// Define the structure for the train information
struct Train {
    int trainNumber;
    string name;
    string type;
    string zone;
    string from;
    string departureTime;
    string to;
    string arrivalTime;
    string duration;
    int halts;
    string depDays;
    string classes;
    string distance;
    string speed;
    Train* next;
};

// Class for managing the linked list
class TrainLinkedList {
private:
    Train* head;

public:
    TrainLinkedList() {
        head = nullptr;
    }

    // Function to insert a new train information
    void insert(int trainNumber, string name, string type, string zone, string from, string departureTime, string to, string arrivalTime, string duration, int halts, string depDays, string classes, string distance, string speed) {
        Train* newTrain = new Train;
        newTrain->trainNumber = trainNumber;
        newTrain->name = name;
        newTrain->type = type;
        newTrain->zone = zone;
        newTrain->from = from;
        newTrain->departureTime = departureTime;
        newTrain->to = to;
        newTrain->arrivalTime = arrivalTime;
        newTrain->duration = duration;
        newTrain->halts = halts;
        newTrain->depDays = depDays;
        newTrain->classes = classes;
        newTrain->distance = distance;
        newTrain->speed = speed;
        newTrain->next = head;
        head = newTrain;
    }

    // Function to display train information for a given train number
    void displayTrainInfo(int trainNumber) {
        Train* temp = head;
        while (temp != nullptr) {
            if (temp->trainNumber == trainNumber) {
                cout << "Train Number: " << temp->trainNumber << endl;
                cout << "Name: " << temp->name << endl;
                cout << "Type: " << temp->type << endl;
                cout << "Zone: " << temp->zone << endl;
                cout << "From: " << temp->from << endl;
                cout << "Departure Time: " << temp->departureTime << endl;
                cout << "To: " << temp->to << endl;
                cout << "Arrival Time: " << temp->arrivalTime << endl;
                cout << "Duration: " << temp->duration << endl;
                cout << "Halts: " << temp->halts << endl;
                cout << "Departure Days: " << temp->depDays << endl;
                cout << "Classes: " << temp->classes << endl;
                cout << "Distance: " << temp->distance << endl;
                cout << "Speed: " << temp->speed << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Train with number " << trainNumber << " not found." << endl;
    }
};

// Main function to demonstrate the usage of the TrainLinkedList
int main() {
    TrainLinkedList trainList;
    // Previous trains...
    // Insert the new trains
    trainList.insert(12453, "Ranchi - New Delhi Rajdhani Express (via Chopan)", "Raj", "NR", "RNC", "17:15", "NDLS", "11:10", "17h 55m", 7, "S      ", "3A 2A 1A", "1244 km", "69 km/hr");
    trainList.insert(12454, "New Delhi - Ranchi Rajdhani Express (via Chopan)", "Raj", "NR", "NDLS", "16:10", "RNC", "09:45", "17h 35m", 7, "      S", "3A 2A 1A", "1244 km", "71 km/hr");
    trainList.insert(12951, "Mumbai Central - New Delhi Tejas Rajdhani Express", "Raj", "WR", "MMCT", "17:00", "NDLS", "08:32", "15h 32m", 6, "SMTWTFS", "3A 2A 1A", "1386 km", "89 km/hr");
    trainList.insert(12952, "New Delhi - Mumbai Central Tejas Rajdhani Express", "Raj", "WR", "NDLS", "16:55", "MMCT", "08:35", "15h 40m", 6, "SMTWTFS", "3A 2A 1A", "1386 km", "88 km/hr");
    trainList.insert(12957, "Swarna Jayanti Rajdhani Express", "Raj", "WR", "ADI", "18:50", "NDLS", "07:30", "12h 40m", 9, "SMTWTFS", "3A 2A 1A", "935 km", "74 km/hr");
    trainList.insert(12958, "Swarna Jayanti Rajdhani Express", "Raj", "WR", "NDLS", "19:55", "ADI", "08:25", "12h 30m", 9, "SMTWTFS", "3A 2A 1A", "935 km", "75 km/hr");

 trainList.insert(20407, "Ranchi - New Delhi Rajdhani Express (Via Japla)", "Raj", "NR", "RNC", "18:25", "NDLS", "11:10", "16h 45m", 6, "      T     ", "3A 2A 1A", "1251 km", "75 km/hr");
    trainList.insert(20408, "New Delhi - Ranchi Rajdhani Express (Via Japla)", "Raj", "NR", "NDLS", "16:10", "RNC", "08:10", "16h 0m", 6, "      W     ", "3A 2A 1A", "1251 km", "78 km/hr");
    trainList.insert(20504, "New Delhi - Dibrugarh Rajdhani Express (Via Moranhat)", "Raj", "NFR", "NDLS", "11:25", "DBRG", "04:40", "41h 15m", 22, " MTW  F S", "3A 2A 1A", "2471 km", "60 km/hr");
    trainList.insert(20503, "Dibrugarh - New Delhi Rajdhani Express (Via Moranhat)", "Raj", "NFR", "DBRG", "19:55", "NDLS", "13:38", "41h 43m", 22, "S  TWT  S", "3A 2A 1A", "2471 km", "59 km/hr");
    trainList.insert(22824, "New Delhi - Bhubaneswar Tejas Rajdhani Express (Via Tatanagar)", "Raj", "ECoR", "NDLS", "17:00", "BBS", "17:30", "24h 30m", 13, "   TW T  S", "3A 2A 1A", "1802 km", "74 km/hr");

     trainList.insert(20407, "Ranchi - New Delhi Rajdhani Express (Via Japla)", "Raj", "NR", "RNC", "18:25", "NDLS", "11:10", "16h 45m", 6, "      T     ", "3A 2A 1A", "1251 km", "75 km/hr");
    trainList.insert(20408, "New Delhi - Ranchi Rajdhani Express (Via Japla)", "Raj", "NR", "NDLS", "16:10", "RNC", "08:10", "16h 0m", 6, "      W     ", "3A 2A 1A", "1251 km", "78 km/hr");
    trainList.insert(20504, "New Delhi - Dibrugarh Rajdhani Express (Via Moranhat)", "Raj", "NFR", "NDLS", "11:25", "DBRG", "04:40", "41h 15m", 22, " MTW  F S", "3A 2A 1A", "2471 km", "60 km/hr");
    trainList.insert(20503, "Dibrugarh - New Delhi Rajdhani Express (Via Moranhat)", "Raj", "NFR", "DBRG", "19:55", "NDLS", "13:38", "41h 43m", 22, "S  TWT  S", "3A 2A 1A", "2471 km", "59 km/hr");
    trainList.insert(22824, "New Delhi - Bhubaneswar Tejas Rajdhani Express (Via Tatanagar)", "Raj", "ECoR", "NDLS", "17:00", "BBS", "17:30", "24h 30m", 13, "   TW T  S", "3A 2A 1A", "1802 km", "74 km/hr");
    trainList.insert(22414, "Hazrat Nizamuddin - Madgaon Rajdhani Express", "Raj", "NR", "NZM", "06:16", "MAO", "08:05", "25h 49m", 9, "     F S", "3A 2A 1A", "1909 km", "74 km/hr");
    trainList.insert(22413, "Madgaon - Hazrat Nizamuddin Rajdhani Express", "Raj", "NR", "MAO", "08:00", "NZM", "12:30", "28h 30m", 9, "S M     ", "3A 2A 1A", "1909 km", "67 km/hr");
    trainList.insert(20817, "Bhubaneswar - New Delhi Tejas Rajdhani Express (via Sambalpur City)", "Raj", "ECoR", "BBS", "07:15", "NDLS", "09:55", "26h 40m", 14, "          S", "3A 2A 1A", "1914 km", "72 km/hr");
 
  trainList.insert(20818, "New Delhi - Bhubaneswar Tejas Rajdhani Express (Via Sambalpur City)", "Raj", "ECoR", "NDLS", "17:00", "BBS", "20:10", "27h 10m", 14, "S          ", "3A 2A 1A", "1914 km", "70 km/hr");

  trainList.insert(20505, "Dibrugarh - New Delhi Rajdhani Express (Via Rangapara North)", "Raj", "NFR", "DBRG", "22:00", "NDLS", "13:38", "39h 38m", 23, " M    F ", "3A 2A 1A", "2294 km", "58 km/hr");
    trainList.insert(20506, "New Delhi - Dibrugarh Rajdhani Express (Via Rangapara North)", "Raj", "NFR", "NDLS", "11:25", "DBRG", "03:10", "39h 45m", 23, "S    T    ", "3A 2A 1A", "2294 km", "58 km/hr");
    trainList.insert(12437, "Secunderabad - Hazrat Nizamuddin Rajdhani Express", "Raj", "NR", "SC", "12:50", "NZM", "10:30", "21h 40m", 5, "     W    ", "3A 2A 1A", "1661 km", "77 km/hr");
    trainList.insert(12438, "Hazrat Nizamuddin - Secunderabad Rajdhani Express", "Raj", "NR", "NZM", "15:35", "SC", "13:35", "22h 0m", 5, "S          ", "3A 2A 1A", "1661 km", "75 km/hr");
    trainList.insert(20839, "Ranchi - New Delhi Rajdhani Express (via Bokaro Steel City)", "Raj", "SER", "RNC", "18:10", "NDLS", "11:10", "17h 0m", 6, "      W    S", "3A 2A 1A", "1307 km", "77 km/hr");
    trainList.insert(20840, "New Delhi - Ranchi Rajdhani Express (Via Bokaro Steel City)", "Raj", "SER", "NDLS", "16:10", "RNC", "09:05", "16h 55m", 6, "  M      F ", "3A 2A 1A", "1310 km", "77 km/hr");
    trainList.insert(12441, "Bilaspur - New Delhi Rajdhani Express", "Raj", "NR", "BSP", "14:00", "NDLS", "10:40", "20h 40m", 8, "  M    T    ", "3A 2A 1A", "1505 km", "73 km/hr");
    trainList.insert(12442, "New Delhi - Bilaspur Rajdhani Express", "Raj", "NR", "NDLS", "15:25", "BSP", "12:00", "20h 35m", 8, "    T    S", "3A 2A 1A", "1505 km", "73 km/hr");

   trainList.insert(12425, "New Delhi - Jammu Tawi Rajdhani Express", "Raj", "NR", "NDLS", "20:40", "JAT", "05:00", "8h 20m", 3, "SMTWTFS", "3A 2A 1A", "577 km", "69 km/hr");
    trainList.insert(12426, "Jammu Tawi - New Delhi Rajdhani Express", "Raj", "NR", "JAT", "21:25", "NDLS", "05:55", "8h 30m", 3, "SMTWTFS", "3A 2A 1A", "577 km", "68 km/hr");
    trainList.insert(22691, "K.S.R. Bengaluru - Hazrat Nizamuddin Rajdhani Express", "Raj", "SWR", "SBC", "20:00", "NZM", "05:30", "33h 30m", 13, "SMTWTFS", "3A 2A 1A", "2367 km", "71 km/hr");
    trainList.insert(22692, "Hazrat Nizamuddin - K.S.R. Bengaluru Rajdhani Express", "Raj", "SWR", "NZM", "19:50", "SBC", "05:20", "33h 30m", 13, "SMTWTFS", "3A 2A 1A", "2367 km", "71 km/hr");
    trainList.insert(12431, "Thiruvananthapuram Central - Hazrat Nizamuddin Rajdhani Express", "Raj", "NR", "TVC", "14:40", "NZM", "12:30", "45h 50m", 19, "  T  TF ", "3A 2A 1A", "2844 km", "62 km/hr");
    trainList.insert(12432, "Hazrat Nizamuddin - Thiruvananthapuram Central Rajdhani Express", "Raj", "NR", "NZM", "06:16", "TVC", "01:50", "43h 34m", 19, "S  TW  ", "3A 2A 1A", "2844 km", "65 km/hr");
    trainList.insert(12433, "M.G.R Chennai Central - Hazrat Nizamuddin Rajdhani Express", "Raj", "NR", "MAS", "06:05", "NZM", "10:30", "28h 25m", 8, "S    F ", "3A 2A 1A", "2175 km", "77 km/hr");
    trainList.insert(12434, "Hazrat Nizamuddin - M.G.R.Chennai Central Rajdhani Express", "Raj", "NR", "NZM", "15:35", "MAS", "21:00", "29h 25m", 8, "   W  F ", "3A 2A 1A", "2175 km", "74 km/hr");

    trainList.insert(12953, "August Kranti Tejas Rajdhani Express", "Raj", "WR", "MMCT", "17:10", "NZM", "09:43", "16h 33m", 10, "SMTWTFS", "3A 2A 1A", "1378 km", "83 km/hr");
    trainList.insert(12954, "August Kranti Tejas Rajdhani Express", "Raj", "WR", "NZM", "17:15", "MMCT", "10:05", "16h 50m", 10, "SMTWTFS", "3A 2A 1A", "1378 km", "82 km/hr");
    trainList.insert(12301, "Howrah - New Delhi Rajdhani Express (Via Gaya)", "Raj", "ER", "HWH", "16:50", "NDLS", "10:05", "17h 15m", 7, " MTWTFS", "3A 2A 1A", "1451 km", "84 km/hr");
    trainList.insert(12302, "New Delhi - Howrah Rajdhani Express (Via Gaya)", "Raj", "ER", "NDLS", "16:50", "HWH", "09:55", "17h 5m", 7, "SMTWTS", "3A 2A 1A", "1451 km", "85 km/hr");
    trainList.insert(12305, "Howrah - New Delhi Rajdhani Express (Via Patna)", "Raj", "ER", "HWH", "14:05", "NDLS", "10:05", "20h 0m", 7, "S      ", "3A 2A 1A", "1531 km", "77 km/hr");
    trainList.insert(12306, "New Delhi - Howrah Rajdhani Express (Via Patna)", "Raj", "ER", "NDLS", "16:50", "HWH", "12:15", "19h 25m", 7, "    F  ", "3A 2A 1A", "1531 km", "79 km/hr");
    trainList.insert(12309, "Rajendra Nagar Terminal - New Delhi Tejas Rajdhani Express", "Raj", "ECR", "RJPB", "19:10", "NDLS", "07:40", "12h 30m", 4, "SMTWFS", "3A 2A 1A", "1001 km", "80 km/hr");
    trainList.insert(12310, "New Delhi - Rajendra Nagar Terminal Tejas Rajdhani Express", "Raj", "ECR", "NDLS", "17:10", "RJPB", "05:15", "12h 5m", 4, "SMTWFS", "3A 2A 1A", "1001 km", "83 km/hr");
    trainList.insert(12313, "Sealdah - New Delhi Rajdhani Express", "Raj", "ER", "SDAH", "16:50", "NDLS", "10:50", "18h 0m", 6, "SMTWTFS", "3A 2A 1A", "1458 km", "81 km/hr");
    trainList.insert(12314, "New Delhi - Sealdah Rajdhani Express", "Raj", "ER", "NDLS", "16:30", "SDAH", "10:10", "17h 40m", 6, "SMTWTFS", "3A 2A 1A", "1458 km", "83 km/hr");

trainList.insert(22811, "Bhubaneswar - New Delhi Tejas Rajdhani Express (via Adra)", "Raj", "ECoR", "BBS", "10:35", "NDLS", "09:55", "23h 20m", 13, "S   W   ", "3A 2A 1A", "1730 km", "74 km/hr");
    trainList.insert(22812, "New Delhi - Bhubaneswar Tejas Rajdhani Express (via Adra) (PT)", "Raj", "ECoR", "NDLS", "17:00", "BBS", "16:15", "23h 15m", 13, " M     F ", "3A 2A 1A", "1725 km", "74 km/hr");
    trainList.insert(12423, "Dibrugarh - New Delhi Rajdhani Express (PT)", "Raj", "NR", "DBRG", "20:55", "NDLS", "10:30", "37h 35m", 19, "SMTWTFS", "3A 2A 1A", "2432 km", "65 km/hr");
    trainList.insert(12424, "New Delhi - Dibrugarh Rajdhani Express", "Raj", "NR", "NDLS", "16:20", "DBRG", "06:00", "37h 40m", 19, "SMTWTFS", "3A 2A 1A", "2432 km", "65 km/hr");


    trainList.insert(20978, "Delhi Cantt. - Ajmer Vande Bharat Express", "VB", "NWR", "DEC", "18:40", "AII", "23:55", "5h 15m", 4, "SMTWTFS", "CC Ex", "429 km", "82 km/hr");
    trainList.insert(22436, "New Delhi - Varanasi Vande Bharat Express", "VB", "NR", "NDLS", "06:00", "BSB", "14:00", "8h 0m", 2, "SMTWTFSS", "CC Ex", "759 km", "95 km/hr");
    trainList.insert(22435, "Varanasi - New Delhi Vande Bharat Express", "VB", "NR", "BSB", "15:00", "NDLS", "23:00", "8h 0m", 2, "SMTWTFSS", "CC Ex", "759 km", "95 km/hr");
    trainList.insert(22439, "New Delhi - Shri Mata Vaishno Devi Katra Vande Bharat Express", "VB", "NR", "NDLS", "06:00", "SVDK", "14:00", "8h 0m", 3, "SMTWTFSS", "CC Ex", "655 km", "82 km/hr");
    trainList.insert(20902, "Mumbai Central - Gandhinagar Capital Vande Bharat Express", "VB", "WR", "MMCT", "06:00", "GNC", "12:25", "6h 25m", 5, "SMTWTFSS", "CC Ex", "522 km", "81 km/hr");

    trainList.insert(20901, "Mumbai Central - Gandhinagar Capital Vande Bharat Express", "VB", "WR", "MMCT", "06:00", "GNC", "12:25", "6h 25m", 5, "SMTWTFS", "CC Ex", "522 km", "81 km/hr");
trainList.insert(20902, "Gandhinagar Capital - Mumbai Central Vande Bharat Express", "VB", "WR", "GNC", "14:05", "MMCT", "20:25", "6h 20m", 5, "SMTWTFS", "CC Ex", "522 km", "82 km/hr");
trainList.insert(22447, "New Delhi - Amb Andaura Vande Bharat Express", "VB", "NR", "NDLS", "05:50", "AADR", "11:05", "5h 15m", 4, "SMTWTFS", "CC Ex", "412 km", "79 km/hr");
trainList.insert(22448, "Amb Andaura - New Delhi Vande Bharat Express", "VB", "NR", "AADR", "13:00", "NDLS", "18:25", "5h 25m", 5, "SMTWTFS", "CC Ex", "412 km", "76 km/hr");
trainList.insert(20607, "MGR Chennai Central - Mysuru Vande Bharat Express", "VB", "SR", "MAS", "05:50", "MYS", "12:20", "6h 30m", 2, "SMTWTFS", "CC Ex", "497 km", "76 km/hr");
trainList.insert(20608, "Mysuru - MGR Chennai Central Vande Bharat Express", "VB", "SR", "MYS", "13:05", "MAS", "19:20", "6h 15m", 2, "SMTWTFS", "CC Ex", "497 km", "79 km/hr");
trainList.insert(20826, "Nagpur - Bilaspur Vande Bharat Express", "VB", "SECR", "NGP", "14:05", "BSP", "19:25", "5h 20m", 4, "SMTWTFS", "CC Ex", "412 km", "77 km/hr");

trainList.insert(20825, "Bilaspur - Nagpur Vande Bharat Express", "VB", "SECR", "BSP", "06:45", "NGP", "12:15", "5h 30m", 4, "SMTWTF", "CC Ex", "412 km", "75 km/hr");
trainList.insert(22301, "Howrah - New Jalpaiguri Vande Bharat Express", "VB", "ER", "HWH", "05:55", "NJP", "13:25", "7h 30m", 3, "SMTWTFS", "CC Ex", "565 km", "75 km/hr");
trainList.insert(22302, "New Jalpaiguri - Howrah Vande Bharat Express", "VB", "ER", "NJP", "15:00", "HWH", "22:35", "7h 35m", 3, "SMTWTFS", "CC Ex", "565 km", "74 km/hr");
trainList.insert(20833, "Visakhapatnam - Secunderabad Vande Bharat Express", "VB", "ECoR", "VSKP", "05:45", "SC", "14:15", "8h 30m", 5, "MTWTFS", "CC Ex", "698 km", "82 km/hr");
trainList.insert(20834, "Secunderabad - Visakhapatnam Vande Bharat Express", "VB", "ECoR", "SC", "15:00", "VSKP", "23:31", "8h 31m", 5, "MTWTFS", "CC Ex", "698 km", "82 km/hr");
trainList.insert(22225, "Mumbai CSMT - Solapur Vande Bharat Express", "VB", "CR", "CSMT", "16:05", "SUR", "22:40", "6h 35m", 5, "SMTWTFS", "CC Ex", "454 km", "69 km/hr");
trainList.insert(22226, "Solapur - Mumbai CSMT Vande Bharat Express", "VB", "CR", "SUR", "06:05", "CSMT", "12:35", "6h 30m", 6, "SMTWTFS", "CC Ex", "454 km", "70 km/hr");
trainList.insert(22223, "Sainagar Shirdi - Mumbai CSMT Vande Bharat Express", "VB", "CR", "SNSI", "17:45", "CSMT", "22:50", "5h 5m", 4, "SMTWTFS", "CC Ex", "341 km", "67 km/hr");
trainList.insert(22224, "Mumbai CSMT - Sainagar Shirdi Vande Bharat Express", "VB", "CR", "CSMT", "06:20", "SNSI", "11:30", "5h 10m", 4, "SMTWTFS", "CC Ex", "343 km", "66 km/hr");
trainList.insert(20171, "Rani Kamalapati (Habibganj) - Hazrat Nizamuddin Vande Bharat Express", "VB", "WCR", "RKMP", "05:40", "NZM", "13:16", "7h 36m", 3, "SMTWTF", "CC Ex", "702 km", "92 km/hr");

trainList.insert(20172, "Hazrat Nizamuddin - Rani Kamalapati (Habibganj) Vande Bharat Express", "VB", "WCR", "NZM", "14:40", "RKMP", "22:16", "7h 36m", 3, "SMTWTF", "CC Ex", "702 km", "92 km/hr");
trainList.insert(20701, "Tirupati - Secunderabad Vande Bharat Express", "VB", "SCR", "TPTY", "15:15", "SC", "23:30", "8h 15m", 4, "SMTWFS", "CC Ex", "662 km", "80 km/hr");
trainList.insert(20702, "Secunderabad - Tirupati Vande Bharat Express", "VB", "SCR", "SC", "06:15", "TPTY", "14:34", "8h 19m", 4, "SMTWFS", "CC Ex", "662 km", "80 km/hr");
trainList.insert(20643, "MGR Chennai Central - Coimbatore Vande Bharat Express", "VB", "SR", "MAS", "14:15", "CBE", "20:15", "6h 0m", 3, "SMTTFS", "CC Ex", "495 km", "82 km/hr");
trainList.insert(20644, "Coimbatore - MGR Chennai Central Vande Bharat Express", "VB", "SR", "CBE", "06:00", "MAS", "11:50", "5h 50m", 3, "SMTTFS", "CC Ex", "495 km", "85 km/hr");
trainList.insert(22227, "New Jalpaiguri - Guwahati Vande Bharat Express", "VB", "NFR", "NJP", "06:10", "GHY", "11:40", "5h 30m", 5, "SMTWFSS", "CC Ex", "407 km", "74 km/hr");
trainList.insert(22228, "Guwahati - New Jalpaiguri Vande Bharat Express", "VB", "NFR", "GHY", "16:30", "NJP", "22:00", "5h 30m", 5, "SMTWFSS", "CC Ex", "407 km", "74 km/hr");
trainList.insert(20977, "Ajmer - Delhi Cantt. Vande Bharat Express", "VB", "NWR", "AII", "06:20", "DEC", "11:35", "5h 15m", 4, "SMTWTFS", "CC Ex", "429 km", "82 km/hr");
trainList.insert(20634, "Thiruvananthapuram Central - Kasaragod Vande Bharat Express (Via Kottayam)", "VB", "SR", "TVC", "05:15", "KGQ", "13:20", "8h 5m", 8, "SMTWTFSS", "CC Ex", "586 km", "73 km/hr");
trainList.insert(20633, "Kasaragod - Thiruvananthapuram Central Vande Bharat Express (Via Kottayam)", "VB", "SR", "KGQ", "14:30", "TVC", "22:40", "8h 10m", 8, "SMTWTFS", "CC Ex", "586 km", "72 km/hr");
trainList.insert(22895, "Howrah - Puri Vande Bharat Express", "VB", "SER", "HWH", "06:10", "PURI", "12:35", "6h 25m", 7, "SMTWTFS", "CC Ex", "500 km", "78 km/hr");
trainList.insert(22896, "Puri - Howrah Vande Bharat Express", "VB", "SER", "PURI", "13:50", "HWH", "20:30", "6h 40m", 7, "SMTWTFS", "CC Ex", "500 km", "75 km/hr");
trainList.insert(22457, "Dehradun - Anand Vihar Terminal Vande Bharat Express", "VB", "NR", "DDN", "07:00", "ANVT", "11:45", "4h 45m", 6, "SMTWTFS", "CC Ex", "302 km", "64 km/hr");
trainList.insert(22458, "Anand Vihar Terminal - Dehradun Vande Bharat Express", "VB", "NR", "ANVT", "17:50", "DDN", "22:35", "4h 45m", 6, "SMTWTFS", "CC Ex", "302 km", "64 km/hr");
trainList.insert(22230, "Mumbai CSMT - Madgaon Vande Bharat Express", "VB", "CR", "CSMT", "05:25", "MAO", "15:30", "10h 5m", 7, "MTWTF", "CC Ex", "581 km", "58 km/hr");


trainList.insert(22230, "Madgaon - Mumbai CSMT Vande Bharat Express", "VB", "CR", "MAO", "12:20", "CSMT", "22:25", "10h 5m", 7, "  T  T  S", "CC Ex", "581 km", "58 km/hr");
trainList.insert(22349, "Patna - Ranchi Vande Bharat Express", "VB", "ECR", "PNBE", "07:00", "RNC", "13:00", "6h 0m", 5, "SMTWFS", "CC Ex", "379 km", "63 km/hr");
trainList.insert(22350, "Ranchi - Patna Vande Bharat Express", "VB", "ECR", "RNC", "16:15", "PNBE", "22:05", "5h 50m", 5, "SMTWFS", "CC Ex", "379 km", "65 km/hr");
trainList.insert(20911, "Indore - Nagpur Vande Bharat Express", "VB", "WR", "INDB", "06:10", "NGP", "14:30", "8h 20m", 4, "  MTWTFS", "CC Ex", "636 km", "76 km/hr");
trainList.insert(20912, "Nagpur - Indore Vande Bharat Express", "VB", "WR", "NGP", "15:20", "INDB", "23:45", "8h 25m", 4, "  MTWTFS", "CC Ex", "636 km", "76 km/hr");
trainList.insert(20661, "KSR Bengaluru - Dharwad Vande Bharat Express", "VB", "SWR", "SBC", "05:45", "DWR", "12:10", "6h 25m", 3, "SMTWFS", "CC Ex", "490 km", "76 km/hr");
trainList.insert(20662, "Dharwad - KSR Bengaluru Vande Bharat Express", "VB", "SWR", "DWR", "13:15", "SBC", "19:45", "6h 30m", 3, "SMTWFS", "CC Ex", "490 km", "75 km/hr");
trainList.insert(20174, "Rewa - Rani Kamalapati (Habibganj) Vande Bharat Express", "VB", "WCR", "REWA", "05:30", "RKMP", "13:30", "8h 0m", 8, "SMTWTFS", "CC Ex", "568 km", "71 km/hr");
trainList.insert(20173, "Rani Kamalapati (Habibganj) - Rewa Vande Bharat Express", "VB", "WCR", "RKMP", "15:30", "REWA", "23:30", "8h 0m", 8, "SMTWTFS", "CC Ex", "568 km", "71 km/hr");
trainList.insert(07305, "Dharwad - KSR Bengaluru Vande Bharat Inaugural Special", "VB", "SWR", "DWR", "10:35", "SBC", "17:05", "6h 30m", 14, "  T  ", "CC Ex", "490 km", "75 km/hr");
trainList.insert(12461, "Jodhpur - Sabarmati Vande Bharat Express", "VB", "NWR", "JU", "06:05", "SBIB", "12:05", "6h 0m", 5, "SMTWFS", "CC Ex", "449 km", "75 km/hr");




    int userInput;
    cout << "Enter a train number: ";
    cin >> userInput;
    cout << endl;

    trainList.displayTrainInfo(userInput);

    return 0;
}
