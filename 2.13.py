def are_points_collinear(x1, y1, x2, y2, x3, y3):
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)
    return area == 0
x1, y1 = map(float, input("Введите координаты точки a (x1 y1): ").split())
x2, y2 = map(float, input("Введите координаты точки b (x2 y2): ").split())
x3, y3 = map(float, input("Введите координаты точки c (x3 y3): ").split())

if are_points_collinear(x1, y1, x2, y2, x3, y3):
    print("Точки лежат на одной прямой.")
else:
    print("Точки не лежат на одной прямой.")
