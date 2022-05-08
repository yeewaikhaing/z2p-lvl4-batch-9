#include<iostream>
using namespace std;
class Song {
    private:
        string title;
        string album;
        string singer;
    public:
        Song() {
            title = "unknown title";
            album = "unknown album";
            singer = "unknown singer";
        }
        void setTitle(string title) {// title = euphoria
            this->title = title;
        }
        string getTitle() {
            return title;
        }
        void setAblum(string album) {
            this->album = album;
        }
        string getAlbum() {
            return album;
        }
        void setSinger(string single) {
            this->singer = single;
        }
        string getSinger() {
            return singer;
        }
        void showData() {
            cout<<"\n";
            cout<<getTitle()<<"\t";
            cout<<album<<"\t";
            cout<<singer<<"\n";
        }
};
int main() {
    // datatype varname[size];
    Song songs[3]; // create song object arrays
    string _title;
    string _album;
    string _singer;
    //input
    for(int i = 0; i < 3;i++) {// i = 3 < 3
        cout<<"\nEnter data for song "<<(i + 1)<<"\n";
        cout<<"Title: ";
        getline(cin, _title);
        cout<<"Ablum: ";
        getline(cin, _album);
        cout<<"Singer: ";
        getline(cin, _singer);

        songs[i].setTitle(_title);//songs[2].setTitle()
        songs[i].setAblum(_album); // songs[1].
        songs[i].setSinger(_singer);// songs[1]
    }
    // output
    cout<<"\n------ Song List -------\n";
    cout<<"Song Title\t Albumn\t Singer\n";
    cout<<"----------------------------------";
    for(int i  = 0; i < 3;i++) {// i = 0 < 3
        songs[i].showData();//sons[0]
    }
}