#include <iostream>
using namespace std;
class Song{
    private:
        string title;
        string album;
        string singer;
    public:
        Song(){
            this->title="Unknown";
            this->album="Unknown";
            this->singer="Unknown";
        }
        void setTitle(string title){
            this->title=title;
        }
        string getTitle(){
            return this->title;
        }
        void setAlbum(string album){
            this->album=album;
        }
        string getAlbum(){
            return this->album;
        }
        void setSinger(string singer){
            this->singer=singer;
        }
        string getSinger(){
            return this->singer;
        }
};


int main(){
    Song songs[3];
    string title,album,singer;
    for (int i=0;i<3;i++){
        cout<<"Enter song title: ";
        getline(cin,title);
        cout<<"Enter album: ";
        getline(cin,album);
        cout<<"Enter singer: ";
        getline(cin,singer);
        songs[i].setTitle(title);
        songs[i].setAlbum(album);
        songs[i].setSinger(singer);
    }
    cout<<"Songs Info:"<<endl;
    cout<<"No\tTitle\t\tAlbum\t\tSinger\n";
    for(int i=0;i<3;i++){
        cout<<i+1<<"\t"<<songs[i].getTitle()<<"\t"<<songs[i].getAlbum()<<"\t"<<songs[i].getSinger()<<endl;
    }
    return 0;
}