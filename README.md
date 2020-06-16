# xd0615

0615笔记
1. 登录github.com
2. 申请自己的账户
3. 创建一个项目仓库
4. 使用git clone命令，将项目克隆的本地
5. 在本地编辑
6. 使用git add 将修改后文件保存在本地仓库。
7. 使用git commit -m命令设置注释
8. 使用git push命令将本地项目更新提交到github。

// git clone 远程操作的第一步，通常是从远程主机克隆一个版本库，这时就要用到git clone命令。该命令会在本地主机生成一个目录，与远程主机的版本库同名。如果要指定不同的目录名，可以将目录名作为git clone命令的第二个参数。
git clone支持多种协议，除了HTTP(s)以外，还支持SSH、Git、本地文件协议等，下面是一些例子。
      $ git clone http[s]://example.com/path/to/repo.git/
      $ git clone ssh://example.com/path/to/repo.git/
      $ git clone git://example.com/path/to/repo.git/
      $ git clone /opt/git/project.git 
      $ git clone file:///opt/git/project.git
      $ git clone ftp[s]://example.com/path/to/repo.git/
      $ git clone rsync://example.com/path/to/repo.git/
  git add 此命令将要提交的文件的信息添加到索引库中(将修改添加到暂存区)，以准备为下一次提交分段的内容。 它通常将现有路径的当前内容作为一个整体添加，但是通过一些选项，它也可以用于添加内容，只对所应用的工作树文件进行一些更改，或删除工作树中不存在的路径了。“索引”保存工作树内容的快照，并且将该快照作为下一个提交的内容。 因此，在对工作树进行任何更改之后，并且在运行git commit命令之前，必须使用git add命令将任何新的或修改的文件添加到索引。该命令可以在提交之前多次执行。它只在运行git add命令时添加指定文件的内容; 如果希望随后的更改包含在下一个提交中，那么必须再次运行 git add 将新的内容添加到索引。
  git commit命令将索引的当前内容与描述更改的用户和日志消息一起存储在新的提交中。
要添加的内容可以通过以下几种方式指定：在使用git commit命令之前，通过使用git add对索引进行递增的“添加”更改(注意：修改后的文件的状态必须为“added”);通过使用git rm从工作树和索引中删除文件，再次使用git commit命令;通过将文件作为参数列出到git commit命令(不使用--interactive或--patch选项)，在这种情况下，提交将忽略索引中分段的更改，而是记录列出的文件的当前内容(必须已知到Git的内容) ;通过使用带有-a选项的git commit命令来自动从所有已知文件(即所有已经在索引中列出的文件)中添加“更改”，并自动从已从工作树中删除索引中的“rm”文件 ，然后执行实际提交;通过使用--interactive或--patch选项与git commit命令一起确定除了索引中的内容之外哪些文件或hunks应该是提交的一部分，然后才能完成操作。
  git push 命令用于将本地分支的更新，推送到远程主机。








//建议：今天的课感觉很好，暂时没有建议。
