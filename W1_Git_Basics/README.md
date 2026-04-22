# Wecamp W1 S1 homework_NgoPhuongQuyen

## Objective
- Practice fundamental Git operations: repository initialization, committing, branching, tracking history,..
- Merging branch into main

## Execution Steps

1. **Create & Init Repo:** 
    `cd ~`
    `mkdir training-demo`
    `cd training-demo`
    `git init`
2. **Verify Tracking:** Check hidden `.git` directory using `ls -a`
3. **Create File & Add Code:** 
    `touch hello.js` 
    `echo "console.log('Hello WeCamp')" > hello.js`
4. **Check Status:** 
    `git status`
5. **Stage File:** 
    `git add .`
6. **Commit:** 
    `git commit -m "add my first homework"`
7. **View History:** 
    `git log`
8. **Create & Switch Branch:** 
    `git checkout -b feature/new-task`
    `git branch`
9. **Create New File & Add Code:** 
    `touch new_feature.js`
    `echo "console.log('This is a new feature');" > new_feature.js`
10. **Stage & Verify:** 
    `git add .`  
    `git status`
11. **Commit && Switch to Main:** 
    `git commit -m "add new feature"`
    `git checkout main`
12. **Merge Branch:** 
    `git merge feature/new-task`

## Verification
![Homework](./screenshots/Wecamp%20W1%20S1%20homework_NgoPhuongQuyen.png)
    