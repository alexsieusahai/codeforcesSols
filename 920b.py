# lists make this easy i think
# brute force approach
for t in range(int(input())):
    students = []
    ans = []
    for i in range(int(input())):
        students.append([int(x) for x in input().split()])
        students[i].append(i)
        ans.append(0)
    s = 1
    q = []
    while len(students) > 0 or len(q) > 0:
        popList = []
        for i in range(len(students)):
            student = students[i]
            if student[0] == s:
                q.append(student)
                popList.append(i)
        for i in popList[::-1]:
            students.pop(i)

        for ind in range(len(q)):
            student = q[ind]
            if student[1] == s:
                q.pop(ind)
        try:
            ans[q[0][2]] = s
            q.pop(0)
        except:
            continue
        s += 1

    print(' '.join([str(x) for x in ans]))

