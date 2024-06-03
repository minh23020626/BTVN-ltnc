Node* removeDuplicates(Node *head)
          {
            Node* curr = head->next;
            Node* prev = head;
            while(curr){
                if(curr->data == prev->data){
                    prev->next = curr->next;
                    curr = curr->next;
                }
                else{
                    prev = curr;
                    curr = curr->next;
                }
            }
            return head;
          }
