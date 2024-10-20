#include<iostream>

using namespace std;

class matrix {
    public :
                  int a,b,c,d,x;
                  
                  
                  void add(int i){
                        if (i==1) {
                        b=2;
                        c=2;
                        
                        int a[b][c];
                        cout<<"Enter a first matrix:"<<"\n";
                        
                        for (int k=0;k<2;k++){
                            for(int j=0;j<2;j++)
                            {
                                
                                cout<<"enter a element:";
                                cin>>a[k][j];
                            }
                            cout<<"";
                        }
                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]";
                            cout<<"\n";
                        
                      
                      
                      
                            
                            int z[b][c];
                            cout<<"Enter a second matrix:"<<"\n";
                            
                            for (int k=0;k<2;k++){
                                for(int j=0;j<2;j++)
                                {
                                    
                                    cout<<"enter a element:";
                                    cin>>z[k][j];
                                }


                                
                                cout<<"";
                            }
                      
                            cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<endl;
                            cout<<"["<<z[1][0]<<" "<<z[1][1]<<"]";
                            cout<<"\n";
                            
                            
                            cout<<"\n Addition of matrix is:"<<"\n";
                            cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<"]"<<endl;
                            cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<"]"<<endl;
                            cout<<"\n";
                    
                        }
                            
                        else if (i==2){
                                b=3;
                                c=3;
                            
                            int a[b][c];
                            cout<<"Enter a first matrix:"<<"\n";
                            
                            for (int k=0;k<3;k++){
                                for(int j=0;j<3;j++)
                                {
                                    
                                    cout<<"enter a element:";
                                    cin>>a[k][j];
                                }
                                cout<<"";
                            }
                            
                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                            cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]";
                        
                            
                            cout<<"\n";
                            cout<<"Enter a second matrix:"<<"\n";
                            
                            int z[b][c];
                            
                            for (int k=0;k<3;k++){
                                for(int j=0;j<3;j++)
                                {
                                    
                                    cout<<"enter a element:";
                                    cin>>z[k][j];
                                }
                                cout<<"";
                            }
                      
                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<"]"<<"\n";
                                cout<<"["<<z[2][0]<<" "<<z[2][1]<<" "<<z[2][2]<<"]"<<endl;
                                
                                cout<<"Addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<"]"<<endl;
                                cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<" "<<a[1][2]+z[1][2]<<"]"<<endl;
                                cout<<"["<<a[2][0]+z[2][0]<<" "<<a[2][1]+z[2][1]<<" "<<a[2][2]+z[2][2]<<"]"<<"\n";
                        }

                        else if(i==3){
                            int row,col;
                            cout<<"Enter a number of rows you want it:";
                            cin>>row;
                            cout<<"Enter a number of column you want it:";
                            cin>>col;

                            if (row==1 && col==2){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<"]";
                                cout<<"\n";

                            }

                             else if (row==1 && col==3){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<"]";
                                cout<<"\n";

                            }

                             else if (row==1 && col==4){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<" "<<a[0][3]+z[0][3]<<"]";
                                cout<<"\n";

                            }
                            else if(row==2 && col==1){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<"]"<<endl;
                                cout<<"\n";
                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<"]"<<endl;
                                cout<<"\n";


                            }
                            else if(row==2 && col==3){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<"]"<<endl;
                                cout<<"\n";
                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<" "<<a[1][2]+z[1][2]<<"]"<<endl;
                                cout<<"\n";

                            }

                            else if (row==2 && col==4){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<" "<<z[1][3]<<"]"<<endl;
                                cout<<"\n";
                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<" "<<a[0][3]+z[0][3]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<" "<<a[1][2]+z[1][2]<<" "<<a[1][3]+z[1][3]<<"]"<<endl;
                                cout<<"\n";

                            } 

                            else if(row==3 && col==1){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<"]"<<"\n";
                                cout<<"["<<a[2][0]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<"]"<<"\n";
                                cout<<"["<<z[2][0]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<"]"<<"\n";
                                cout<<"["<<a[2][0]+z[2][0]<<"]"<<endl;
                                cout<<"\n";

                            }

                            else if(row==3 && col==2){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<"\n";
                                cout<<"["<<a[2][0]<<" "<<a[2][1]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<" "<<z[1][1]<<"]"<<"\n";
                                cout<<"["<<z[2][0]<<" "<<z[2][1]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<"]"<<"\n";
                                cout<<"["<<a[2][0]+z[2][0]<<" "<<a[2][1]+z[2][1]<<"]"<<endl;
                                cout<<"\n";
                            }

                            else if (row==3 && col==4){
                                int a[row][col];
                                cout<<"Enter a first a matrix"<<"\n";
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>a[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<"]"<<"\n";
                                cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"Enter a second matrix:"<<"\n";
                                int z[row][col];
                                for (int k=0;k<row;k++){
                                    for (int j=0;j<col;j++){
                                        cout<<"Enter a element ofr matrix:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }

                                cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";
                                cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<" "<<z[1][3]<<"]"<<"\n";
                                cout<<"["<<z[2][0]<<" "<<z[2][1]<<" "<<z[2][2]<<" "<<z[2][3]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"addition of matrix is:"<<"\n";
                                cout<<"["<<a[0][0]+z[0][0]<<" "<<a[0][1]+z[0][1]<<" "<<a[0][2]+z[0][2]<<" "<<a[0][3]+z[0][3]<<"]"<<"\n";
                                cout<<"["<<a[1][0]+z[1][0]<<" "<<a[1][1]+z[1][1]<<" "<<a[1][2]+z[1][2]<<" "<<a[1][3]+z[1][3]<<"]"<<"\n";
                                cout<<"["<<a[2][0]+z[2][0]<<" "<<a[2][1]+z[2][1]<<" "<<a[2][2]+z[2][2]<<" "<<a[2][3]+z[2][3]<<"]"<<endl;
                                cout<<"\n";

                            }

                            else{
                                cout<<"please enter a enter a column value from 2 to 4"<<endl;
                                cout<<"this calculator perform operation less than 5 column";
                                cout<<"\n";
                            }
                        }
                    

                        else{
                            cout<<"invalid choice"<<"\n";
                        }
                    }

                    void sub(int i){
                        if(i==1){
                            b=2;
                            c=2;
                        
                            int a[b][c];
                            cout<<"Enter a first matrix:"<<"\n";
                        
                            for (int k=0;k<2;k++){
                                for(int j=0;j<2;j++)
                               {
                                  cout<<"enter a element:";
                                  cin>>a[k][j];
                                }
                               cout<<"";
                            }
                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]";
                            cout<<"\n";
                            
                      
                      
                      
                            
                            int z[b][c];
                            cout<<"Enter a second matrix:"<<"\n";
                            
                            for (int k=0;k<2;k++){
                                for(int j=0;j<2;j++)
                                {
                                    
                                    cout<<"enter a element:";
                                    cin>>z[k][j];
                                }
                                cout<<"";
                            }
                      
                            cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<endl;
                            cout<<"["<<z[1][0]<<" "<<z[1][1]<<"]";
                            cout<<"\n";
                            
                            
                            cout<<"subtraction of matrix is:"<<"\n";
                            cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<"]"<<endl;
                            cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<"]"<<endl;
                            cout<<"\n";
                    
                        }

                        else if(i==2){
                                b=3;
                                c=3;
                            
                                int a[b][c];
                                cout<<"Enter a first matrix:"<<"\n";
                            
                                for (int k=0;k<3;k++){
                                    for(int j=0;j<3;j++)
                                   {
                                      cout<<"enter a element:";
                                      cin>>a[k][j];
                                   }
                                   cout<<"";
                                }
                            
                                cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                                cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                                cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]";
                                cout<<"\n";
                            
                                
                                cout<<"Enter a second matrix:"<<"\n";
                                
                                int z[b][c];
                                
                                for (int k=0;k<3;k++){
                                    for(int j=0;j<3;j++)
                                    {
                                        
                                        cout<<"enter a element:";
                                        cin>>z[k][j];
                                    }
                                    cout<<"";
                                }
                        
                                    cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";
                                    cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<"]"<<"\n";
                                    cout<<"["<<z[2][0]<<" "<<z[2][1]<<" "<<z[2][2]<<"]";
                                    
                                    cout<<"subtraction of matrix is:"<<"\n";
                                    cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<"]"<<endl;
                                    cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<" "<<a[1][2]-z[1][2]<<"]"<<endl;
                                    cout<<"["<<a[2][0]-z[2][0]<<" "<<a[2][1]-z[2][1]<<" "<<a[2][2]-z[2][2]<<"]"<<"\n";

                                
                                    cout<<"\n";
                            }

                            else if(i==3){
                                    int row,col;
                                    cout<<"Enter a number of rows you want it:";
                                    cin>>row;
                                    cout<<"Enter a number of column you want it:";
                                    cin>>col;

                                    if (row==1 && col==2){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<"\n";

                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<"]";
                                        cout<<"\n";

                                    }

                                    else if (row==1 && col==3){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";

                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<"]";
                                        cout<<"\n";

                                    }

                                    else if (row==1 && col==4){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";

                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<" "<<a[0][3]-z[0][3]<<"]";
                                        cout<<"\n";

                                    }
                                    else if(row==2 && col==1){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<"]"<<endl;
                                        cout<<"\n";
                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<"]"<<endl;
                                        cout<<"\n";


                                    }
                                    else if(row==2 && col==3){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<"]"<<endl;
                                        cout<<"\n";
                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<" "<<a[1][2]-z[1][2]<<"]"<<endl;
                                        cout<<"\n";

                                    }

                                    else if (row==2 && col==4){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<" "<<z[1][3]<<"]"<<endl;
                                        cout<<"\n";
                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<" "<<a[0][3]-z[0][3]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<" "<<a[1][2]-z[1][2]<<" "<<a[1][3]-z[1][3]<<"]"<<endl;
                                        cout<<"\n";

                                    } 

                                    else if(row==3 && col==1){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<"]"<<"\n";
                                        cout<<"["<<z[2][0]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]-z[2][0]<<"]"<<endl;
                                        cout<<"\n";

                                    }

                                    else if(row==3 && col==2){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]<<" "<<a[2][1]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<" "<<z[1][1]<<"]"<<"\n";
                                        cout<<"["<<z[2][0]<<" "<<z[2][1]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"addition of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]-z[2][0]<<" "<<a[2][1]-z[2][1]<<"]"<<endl;
                                        cout<<"\n";
                                    }

                                    else if (row==3 && col==4){
                                        int a[row][col];
                                        cout<<"Enter a first a matrix"<<"\n";
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>a[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"Enter a second matrix:"<<"\n";
                                        int z[row][col];
                                        for (int k=0;k<row;k++){
                                            for (int j=0;j<col;j++){
                                                cout<<"Enter a element ofr matrix:";
                                                cin>>z[k][j];
                                            }
                                            cout<<"";
                                        }

                                        cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<" "<<z[0][3]<<"]"<<"\n";
                                        cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<" "<<z[1][3]<<"]"<<"\n";
                                        cout<<"["<<z[2][0]<<" "<<z[2][1]<<" "<<z[2][2]<<" "<<z[2][3]<<"]"<<endl;
                                        cout<<"\n";

                                        cout<<"subtraction of matrix is:"<<"\n";
                                        cout<<"["<<a[0][0]-z[0][0]<<" "<<a[0][1]-z[0][1]<<" "<<a[0][2]-z[0][2]<<" "<<a[0][3]-z[0][3]<<"]"<<"\n";
                                        cout<<"["<<a[1][0]-z[1][0]<<" "<<a[1][1]-z[1][1]<<" "<<a[1][2]-z[1][2]<<" "<<a[1][3]-z[1][3]<<"]"<<"\n";
                                        cout<<"["<<a[2][0]-z[2][0]<<" "<<a[2][1]-z[2][1]<<" "<<a[2][2]-z[2][2]<<" "<<a[2][3]-z[2][3]<<"]"<<endl;
                                        cout<<"\n";

                                    }

                                    else{
                                        cout<<"please enter a enter a column value from 2 to 4"<<endl;
                                        cout<<"this calculator perform operation less than 5 column";
                                        cout<<"\n";
                                    }
                        }
                        else{
                                cout<<"invalid choice"<<"\n";
                        }
                    }

                    void mul(int i){
                        if (i==1){
                            b=2;
                            c=2;
                            int a[b][c];
                            cout<<"Enter a first matrix:"<<"\n";

                            for (int i=0;i<2;i++){
                                for (int j=0;j<2;j++){
                                    cout<<"Enter a element:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"Enter a second matrix:"<<"\n";
                            int z[b][c];

                            for (int k=0;k<2;k++){
                                for(int j=0;j<2;j++){
                                    cout<<"Enter a element:";
                                    cin>>z[k][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<z[0][0]<<" "<<z[0][1]<<"]"<<"\n";
                            cout<<"["<<z[1][0]<<" "<<z[1][1]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"multiplication of matrix:"<<endl;
                            cout<<"["<<(a[0][0]*z[0][0])+(a[0][1]*z[1][0])<<" "<<(a[0][0]*z[0][1])+(a[0][1]*z[1][1])<<"]"<<"\n";
                            cout<<"["<<(a[1][0]*z[0][0])+(a[1][1]*z[1][0])<<" "<<(a[1][0]*z[0][1])+(a[1][1]*z[1][1])<<"]"<<endl;
                            cout<<"\n";

                        }

                        else if(i==2){
                            b=3;
                            c=3;

                            int a[b][c];

                            cout<<"Enter a first matrix:"<<"\n";

                            for (int i=0;i<3;i++){
                                for (int j=0;j<3;j++){
                                    cout<<"Enter a element:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                            cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]"<<endl;
                            cout<<"\n";


                            int z[b][c];
                            cout<<"Enter a second matrix:"<<"\n";
                            for (int k=0;k<3;k++){
                                for (int j=0;j<3;j++){
                                    cout<<"Enter a element:";
                                    cin>>z[k][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<z[0][0]<<" "<<z[0][1]<<" "<<z[0][2]<<"]"<<"\n";
                            cout<<"["<<z[1][0]<<" "<<z[1][1]<<" "<<z[1][2]<<"]"<<"\n";
                            cout<<"["<<z[2][0]<<" "<<z[2][1]<<" "<<z[2][2]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"multiplication of matrix:"<<"\n";
                            cout<<"["<<(a[0][0]*z[0][0])+(a[0][1]*z[1][0])+(a[0][2]*z[2][0])<<" "<<(a[0][0]*z[0][1])+(a[0][1]*z[1][1])+(a[0][2]*z[2][1])<<" "<<(a[0][0]*z[0][2])+(a[0][1]*z[1][2])+(a[0][2]*z[2][2])<<"]"<<"\n";
                            cout<<"["<<(a[1][0]*z[0][0])+(a[1][1]*z[1][0])+(a[1][2]*z[2][0])<<" "<<(a[1][0]*z[0][1])+(a[1][1]*z[1][1])+(a[1][2]*z[2][1])<<" "<<(a[1][0]*z[0][2])+(a[1][1]*z[1][2])+(a[1][2]*z[2][2])<<"]"<<"\n";
                            cout<<"["<<(a[2][0]*z[0][0])+(a[2][1]*z[1][0])+(a[2][2]*z[2][0])<<" "<<(a[2][0]*z[0][1])+(a[2][1]*z[1][1])+(a[2][2]*z[2][1])<<" "<<(a[2][0]*z[0][2])+(a[2][1]*z[1][2])+a[2][2]*z[2][2]<<"]"<<endl;
                            cout<<"\n";
                            
                        }

                        else{
                            cout<<"invalid choice"<<"\n";
                        }
                    }

                    void det(int i){
                        if (i==1){
                           
                            b=2;
                            c=2;
                            int a[b][c];
                            for(int i=0;i<2;i++){
                                for(int j=0;j<2;j++){
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"determinant of matrix is:";
                            x=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
                            cout<<"|"<<x<<"|"<<endl;
                            cout<<"\n";
                        }

                        else if(i==2){
                            b=3;
                            c=3;
                            int a[b][c];
                            for(int i=0;i<3;i++){
                                for(int j=0;j<3;j++){
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                            cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"Determinant of matrix is:";
                            x=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
                            cout<<"|"<<x<<"|"<<endl;

                        }

                        else{
                            cout<<"invalid choice"<<"\n";
                        }
                    }

                    void tran(int i){
                        if(i==1){
                            b=2;
                            c=2;
                            int a[b][c];
                            for(int i=0;i<2;i++){
                                for(int j=0;j<2;j++){
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<endl;
                            cout<<"\n";

                            
                            cout<<"transpose of matrix is:"<<endl;
                            cout<<"["<<a[0][0]<<" "<<a[1][0]<<"]"<<"\n";
                            cout<<"["<<a[0][1]<<" "<<a[1][1]<<"]"<<endl;
                            cout<<"\n";
                        }

                        else if(i==2){
                            b=3;
                            c=3;
                            int a[b][c];
                            for(int i=0;i<3;i++){
                                for(int j=0;j<3;j++){
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                            cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]"<<endl;
                            cout<<"\n";

                            cout<<"Transpose of matrix is:"<<"\n";
                            cout<<"["<<a[0][0]<<" "<<a[1][0]<<" "<<a[2][0]<<"]"<<"\n";
                            cout<<"["<<a[0][1]<<" "<<a[1][1]<<" "<<a[2][1]<<"]"<<"\n";
                            cout<<"["<<a[0][2]<<" "<<a[1][2]<<" "<<a[2][2]<<"]"<<endl;
                            cout<<"\n";
                        }

                        else{
                            cout<<"invalid choice"<<"\n";
                        }
                    }

                    void inv(int i){
                        b=2;
                        c=2;
                        if (i==1){

                            float a[b][c];
                            cout<<"please enter a positive interger"<<"\n";
                            cout<<"due to some techinical issue"<<endl;
                            for(int i=0;i<2;i++){
                                for(int j=0;j<2;j++){
                                    
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<endl;
                            cout<<"\n";

                            x=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);

                            cout<<"inverse of matrix is:"<<endl;
                            if (x==0){
                                cout<<"determinant is"<<" "<<x<<" "<<"so inverse of this matrix is not possible"<<"\n";


                                cout<<"\n";

                            }

                            else{
                                float w=1/x;
                                // cout<<w<<"\n";
                                cout<<"["<<a[1][1]<<" "<<(-a[0][1])<<"]"<<"\n";
                                cout<<"["<<(-a[1][0])<<" "<<a[0][0]<<"]"<<endl;
                                cout<<"\n";
                            }
                        }

                        else if(i==2){
                            b=3;
                            c=3;
                            float a[b][c];
                            for(int i=0;i<3;i++){
                                for(int j=0;j<3;j++){
                                    cout<<"Enter a element of matrix:";
                                    cin>>a[i][j];
                                }
                                cout<<"";
                            }

                            cout<<"["<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<"]"<<"\n";
                            cout<<"["<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"]"<<"\n";
                            cout<<"["<<a[2][0]<<" "<<a[2][1]<<" "<<a[2][2]<<"]"<<endl;
                            cout<<"\n";

                            x=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));


                            
                            if (x==0){
                                cout<<"determinant is"<<" "<<x<<" "<<"so inverse of this matrix is not possible"<<"\n";

                            }

                            else{
                                float w=1/x;
                                cout<<"1.transpose matrix is:"<<"\n";
                                cout<<"["<<a[1][1]*a[2][2]-a[1][2]*a[2][1]<<" "<<a[1][2]*a[2][0]-a[1][0]*a[2][2]<<" "<<a[1][0]*a[2][1]-a[1][1]*a[2][0]<<"]"<<"\n";
                                cout<<"["<<a[2][1]*a[0][2]-a[2][2]*a[0][1]<<" "<<a[2][2]*a[0][0]-a[2][0]*a[0][2]<<" "<<a[2][0]*a[0][1]-a[2][1]*a[0][0]<<"]"<<"\n";
                                cout<<"["<<a[0][1]*a[1][2]-a[0][2]*a[1][1]<<" "<<a[0][2]*a[1][0]-a[0][0]*a[1][2]<<" "<<a[0][0]*a[1][1]-a[0][1]*a[1][0]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"2.adjoint matrix is:"<<"\n";
                                cout<<"["<<a[1][1]*a[2][2]-a[1][2]*a[2][1]<<" "<<a[2][1]*a[0][2]-a[2][2]*a[0][1]<<" "<<a[0][1]*a[1][2]-a[0][2]*a[1][1]<<"]"<<"\n";
                                cout<<"["<<a[1][2]*a[2][0]-a[1][0]*a[2][2]<<" "<<a[2][2]*a[0][0]-a[2][0]*a[0][2]<<" "<<a[0][2]*a[1][0]-a[0][0]*a[1][2]<<"]"<<"\n";
                                cout<<"["<<a[1][0]*a[2][1]-a[1][1]*a[2][0]<<" "<<a[2][0]*a[0][1]-a[2][1]*a[0][0]<<" "<<a[0][0]*a[1][1]-a[0][1]*a[1][0]<<"]"<<endl;
                                cout<<"\n";

                                cout<<"inverse matrix is:"<<"\n";
                                cout<<"["<<w*(a[1][1]*a[2][2]-a[1][2]*a[2][1])<<" "<<w*(a[2][1]*a[0][2]-a[2][2]*a[0][1])<<" "<<w*(a[0][1]*a[1][2]-a[0][2]*a[1][1])<<"]"<<"\n";
                                cout<<"["<<w*(a[1][2]*a[2][0]-a[1][0]*a[2][2])<<" "<<w*(a[2][2]*a[0][0]-a[2][0]*a[0][2])<<" "<<w*(a[0][2]*a[1][0]-a[0][0]*a[1][2])<<"]"<<"\n";
                                cout<<"["<<w*(a[1][0]*a[2][1]-a[1][1]*a[2][0])<<" "<<w*(a[2][0]*a[0][1]-a[2][1]*a[0][0])<<" "<<w*(a[0][0]*a[1][1]-a[0][1]*a[1][0])<<"]"<<endl;

                            }
                        }
                    }    

                    
};

int main() {
    matrix m;
    int choice,t;
    char ch;
    
    do{
        cout<<"welcome to our matrix opeartion calculator"<<"\n";
        cout<<"1.Addition of matrix \n";
        cout<<"2.Subttaction of matrix \n";
        cout<<"3.multiplication of matrix \n";
        cout<<"4.Determinant of matrix"<<"\n";
        cout<<"5.Transpose of matrix"<<"\n";
        cout<<"6.Inverse of matrix"<<"\n";
        cout<<"7.Exit \n";
        cout<<"Enter a your choice:";
        cin>>choice;
        
        switch(choice){
            case 1:
                         cout<<"Select the order of matrix"<<"\n";
                         cout<<"press 1 for 2*2 matrix"<<"\n";
                         cout<<"press 2 for 3*3 matrix"<<"\n";
                         cout<<"press 3 for accoording to user select the order of matrix"<<"\n";
                         cout<<"Enter a choice:";
                         cin>>t;
                         m.add(t);
                         break;
                         
             case 2:
                          cout<<"Select the order of matrix"<<"\n";
                         cout<<"press 1 for 2*2 matrix"<<"\n";
                         cout<<"press 2 for 3*3 matrix"<<"\n";
                         cout<<"press 3 for accoording to user select the order of matrix"<<"\n";
                         cout<<"Enter a choice:";
                         cin>>t;
                         m.sub(t);
                         break;

            case 3:
                        cout<<"select the order of matrix:"<<"\n";
                        cout<<"press 1 for 2*2 matrix"<<endl;
                        cout<<"press 2 for 3*3 matrix"<<endl;
                        cout<<"Enter a choice:";
                        cin>>t;
                        m.mul(t);
                        break;

            case 4:
                       cout<<"Select the order of matrix:"<<"\n";
                       cout<<"press 1 for 2*2 matrix"<<endl;
                       cout<<"press 2 for 3*3 matrix"<<endl;
                       cout<<"Enter a choice:";
                       cin>>t;
                       m.det(t);
                       break;


            case 5:
                       cout<<"Select the order of matrix:"<<"\n";
                       cout<<"press 1 for 2*2 matrix"<<endl;
                       cout<<"press 2 for 3*3 matrix"<<endl;
                       cout<<"Enter a choice:";
                       cin>>t;
                       m.tran(t);
                       break;

            case 6:
                      cout<<"select the order of matrix:"<<"\n";
                      cout<<"press 1 for 2*2 matrix"<<endl;
                      cout<<"press 2 for 3*3 matrix"<<endl;
                      cout<<"Enter a choice:";
                      cin>>t;
                      m.inv(t);
                      break;

                       

            case 7:
                      cout<<"thanks for using our calculator"<<"\n";
                      cout<<"\n";
                      break;
            default:
                     cout<<"you are selected"<<" "<<choice<<" "<<"number"<<endl;
                     cout<<"this is not valid"<<endl;
                     cout<<"please select valid choice"<<"\n";
                     cout<<"\n";
                     break;
                         
                         
        }

    }while(choice!=0);
}
