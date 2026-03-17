/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int getDecimalValue(ListNode head) 
    {
        ListNode curr = head;
        ListNode prev = null;
        ListNode after = null;

        while(curr != null)
        {
            after = curr.next;
            curr.next = prev;
            prev = curr;
            curr = after;
        }

        int base = 1;
        int iRet = 0;

        while(prev != null)
        {
            if(prev.val == 1)
            {
                iRet = iRet + (prev.val * base);
                base  = base*2;
            }
            else
            {
                base = base*2;
            }
            prev = prev.next;
        }
        return iRet;
    }
}