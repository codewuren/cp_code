import datetime

def main():
    weeks = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
    y, m, d = map(int, input().split())
    try:
        week = datetime.datetime.strptime(str(y) + str(m) + str(d), "%Y%m%d").weekday()
        print(str(y) + '-' + str(m) + '-' + str(d) + " is " + weeks[week])
    except:
        print(str(y) + '-' + str(m) + '-' + str(d) + " is Non-existent")

if __name__ == "__main__":
    main()