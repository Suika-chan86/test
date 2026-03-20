# 🚀 Git 常用命令手册

## 1. 标准上传流程 (每天必做)
```bash
git add .                  # 扫描所有变动（受 .gitignore 保护，不抓垃圾）
git commit -m "feat: 备注"  # 本地存档 (feat:新功能, fix:修Bug, docs:改文档)
git push                   # 推送到 GitHub

# 彻底清除全局代理
git config --global --unset http.proxy
git config --global --unset https.proxy

# 检查当前是否有残留配置
git config --list

# 强制降级协议 (解决 HTTP/2 报错)
git config --global http.version HTTP/1.1

git rm -r --cached .  # 清除追踪记录（不删本地文件）
git add .             # 重新依据 .gitignore 扫描
git commit -m "chore: 清理忽略文件"
git push