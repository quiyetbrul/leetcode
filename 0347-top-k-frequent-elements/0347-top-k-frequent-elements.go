import "container/heap"

type Item struct{
    value int
    priority int
}

type PriorityQueue []*Item

func (pq PriorityQueue) Len() int { return len(pq) }

func (pq PriorityQueue) Less(i, j int) bool {
    // We want Pop to give us the highest, not lowest, priority so we use greater than here.
    return pq[i].priority < pq[j].priority
}

func (pq PriorityQueue) Swap(i, j int) {
    pq[i], pq[j] = pq[j], pq[i]
}

func (pq *PriorityQueue) Push(x interface{}) {
    item := x.(*Item)
    *pq = append(*pq, item)
}

func (pq *PriorityQueue) Pop() interface{} {
    old := *pq
    n := len(old)
    item := old[n-1]
    *pq = old[0 : n-1]
    return item
}

func topKFrequent(nums []int, k int) (res []int) {
    if len(nums) == 0 {
        return []int{}
    }

    // Step 1: Count the frequency of each element
    freqMap := make(map[int]int)
    for _, n := range nums {
        freqMap[n]++
    }

    // Step 2: Use a min-heap to keep track of the top k elements
    pq := &PriorityQueue{}
    heap.Init(pq)

    for value, priority := range freqMap {
        heap.Push(pq, &Item{value: value, priority: priority})
        if pq.Len() > k {
            heap.Pop(pq)
        }
    }

    // Step 3: Extract the top k elements from the heap
    for pq.Len() > 0 {
        item := heap.Pop(pq).(*Item)
        res = append(res, item.value)
    }

    return res
}
