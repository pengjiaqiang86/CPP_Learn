import os

"""
2024年4月27日16:09:12 7115
2024年5月3日12:43:28 9304
"""
line_count = 0

for dirpath, dirnames, filenames in os.walk("."):
    for file in filenames:
        if file.endswith(("cpp", "CPP", "h", "H", "hpp", "HPP")):

            try:
                with open(os.path.join(dirpath, file), "r", encoding="utf-8") as source_file:
                    line_count += len(source_file.readlines())
            except UnicodeDecodeError:
                with open(os.path.join(dirpath, file), "r", encoding="gbk") as source_file:
                    line_count += len(source_file.readlines())

print(line_count)
