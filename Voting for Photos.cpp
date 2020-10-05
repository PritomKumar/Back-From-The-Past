#include <bits/stdc++.h>

using namespace std;

struct Post{
    int id;
    int like = 0;
    int lastPosition =0;
};

int main() {
    
    int n;
    cin>>n;
    int likes[n];
    
    
    for (int i = 0; i < n; i++)
    {
        cin>>likes[i];
    }

    vector <Post> photoIds;

    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < photoIds.size(); j++)
        {
            if(photoIds[j].id == likes[i]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            Post temp;
            temp.id = likes[i];
            photoIds.push_back(temp);
        }
        
    }
    
    // for (int i = 0; i < photoIds.size(); i++)
    // {
    //     cout << photoIds[i].id << " " ;
    // }
    

    for (int i = 0; i < photoIds.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(photoIds[i].id == likes[j]){
                photoIds[i].like++;
                photoIds[i].lastPosition = j;
            }
        }
        
    }
    
    // for (int i = 0; i < photoIds.size(); i++)
    // {
    //     cout << photoIds[i].id << " " << photoIds[i].like << " " <<endl;
    // }

    int maxi = 0;
    for (int i = 0; i < photoIds.size(); i++)
    {
        if(photoIds[i].like > maxi){
            maxi = photoIds[i].like;
        }
    }

    vector<Post> bestPhotos;

    for (int i = 0; i < photoIds.size(); i++)
    {
        if(photoIds[i].like == maxi){
            bestPhotos.push_back(photoIds[i]);
        }
    }

    // for (int i = 0; i < bestPhotos.size(); i++)
    // {
    //     cout << bestPhotos[i].id << " " << bestPhotos[i].like << " " << bestPhotos[i].lastPosition << " " <<endl;
    // }
    
    int mini = INT32_MAX;
    Post answer;

    for (int i = 0; i < bestPhotos.size(); i++)
    {
        if(bestPhotos[i].lastPosition <= mini){
            mini = bestPhotos[i].lastPosition;
            answer = bestPhotos[i];
        }
    }
    
    cout << answer.id <<endl;


    return 0;
}