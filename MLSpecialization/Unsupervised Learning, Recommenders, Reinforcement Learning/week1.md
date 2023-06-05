# Clustering

## K-means

- Randomly initialize k cluster points
- Assing the data points to centroids
- If no points were assigned to the cluster, eliminate the cluster
- Take average of each cluster and move centroids to average
- classify each point according to the closer centroid
- If we keep doing this and there are no further changes to the assignment of the points, that means the model has converged and has found the clusters of maximum separation

![](./assets/kmeans.png)



