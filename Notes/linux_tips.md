# 🚀 Git 常用操作与故障排除手册

## 1. 日常开发三部曲 (上传代码)
- `git status`          # 【第一步】查看哪些文件改动了
- `git add .`           # 【第二步】将改动放入暂存区 (受 .gitignore 保护)
- `git commit -m "备注"` # 【第三步】本地存档 (例如: "feat: 完成作业1")
- `git push`            # 【第四步】推送到 GitHub

---

## 2. 代理管理 (网络报错必看)
> 如果遇到 `Connection refused` 或 `Timeout`，请执行以下命令：

### A. 清除代理 (回归直连状态)
- `git config --global --unset http.proxy`
- `git config --global --unset https.proxy`

### B. 检查配置 (确认是否删干净)
- `git config --list`
- *注意：若看到类似 `http.https://github.com...` 的奇怪项，需手动编辑 `nano ~/.gitconfig` 删除。*

### C. 优化设置 (提高稳定性)
- `git config --global http.version HTTP/1.1` # 解决 HTTP/2 传输中断

---

## 3. 仓库维护 (大扫除)
### A. 应用 .gitignore 更新
> 如果不小心上传了二进制文件，用这个流程清理：
1. `git rm -r --cached .`  # 停止追踪所有文件
2. `git add .`             # 重新读取 .gitignore 并添加
3. `git commit -m "chore: 清理忽略文件"`
4. `git push`

### B. 处理空文件夹
- Git 默认不追踪空文件夹。若需保留目录结构，请在文件夹内创建 `.gitkeep`：
  `touch path/to/folder/.gitkeep`

---

## 4. 常见报错解决方法
- **报错：`nothing to commit, working tree clean`**
  - 原因：文件未保存，或已经 add/commit 过了。
- **报错：`HTTP/2 stream 1 was not closed cleanly`**
  - 原因：网络波动。建议：换手机热点再 push。
- **报错：`GnuTLS recv error (-110)`**
  - 原因：直连 GitHub 超时。建议：开启代理或换热点。