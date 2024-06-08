#include <vector>

const int INF = 0xFFFFFFF;

// 无向图实现
class UDgraph
{
    private:
        int* edge;
        int vexnum;
        int arcnum;

    public:
        UDgraph();
        ~UDgraph();
        void create(int* Edge, int x, int y);
        int* dijkstra(int snode);
        int* floyd(int snode);
};

UDgraph::UDgraph()
{
    this->edge = nullptr;
    this->vexnum = 0;
    this->arcnum = 0;
}

UDgraph::~UDgraph()
{
    if (this->edge)
        delete this->edge;
}

void UDgraph::create(int* Edge, int x, int y)
{
    this->vexnum = x;
    this->edge = new int[x * y];
    for (int i = 0;i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (Edge[i * j])
            {
                this->edge[i * j] = Edge[i * j];
                this->arcnum++;
            }
            else
            {
                this->edge[i * j] = 0;
            }
        }
    }
}

// int* UDgraph::dijkstra(int snode)
// {
//     std::vector<int> minarr;
//     minarr.reserve(vexnum);
//     std::fill(minarr.begin(), minarr.end(), INF);
//     minarr[snode] = 0;
// }