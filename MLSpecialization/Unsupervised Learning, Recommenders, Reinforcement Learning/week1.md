# Clustering

## K-means

- Randomly initialize k cluster points
- Assing the data points to centroids
- If no points were assigned to the cluster, eliminate the cluster
- Take average of each cluster and move centroids to average
- classify each point according to the closer centroid
- If we keep doing this and there are no further changes to the assignment of the points, that means the model has converged and has found the clusters of maximum separation

![](./assets/kmeans.png)

### Optimization objective

the k-means is trying to find the centroids that minimize the squared distance between the point and the centroid. This is known as the **Distortion function** (it is guaranted to converge, on every single iteration, the function should go down)

![](./assets/optimization.png)

When initializing the k-means centroids, the algorithm may be stuck in the local minima and fail to converge depending on the values of the initial values. 

One way to fix this, is to use multiple centroids (k) selected at random, and compute the cost function J of all the choices of classes. Choose the clusters with smallest cost

![](./assets/initialization.png)

### Choosing k

- Elbow method: (Andrew doesn't use this)

![](./assets/elbow.png)

- Recommended method: what's important to you? How many clusters do you need for your purpose?

![](./assets/recommended.png)
